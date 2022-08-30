import importlib.util
import pathlib
import sys
import CutsceneTypes
import binary
import os


def convert(input_path, output_path):
    print(f"Converting {input_path} to {output_path}")
    c = CutsceneTypes.Cutscene(binary.BinaryWriter(open(output_path, "wb")))
    spec = importlib.util.spec_from_file_location("cutsceneImp", input_path)
    cutsceneImp = importlib.util.module_from_spec(spec)
    sys.modules["cutsceneImp"] = cutsceneImp
    spec.loader.exec_module(cutsceneImp)
    cutsceneImp.cutscene(c)
    c.end_cutscene()


def compileCutscenes():
    for root, _, files in os.walk("cutscenes"):
        for file in files:
            path = os.path.join(root, file)
            if not path.endswith(".py"):
                continue
            path_dest = os.path.splitext(os.path.join("../nitrofs/data", path))[0] + ".cscn"
            if os.path.isfile(path_dest):
                src_time = os.path.getmtime(path)
                dst_time = os.path.getmtime(path_dest)
                if src_time > dst_time:
                    convert(path, path_dest)
            else:
                pathlib.Path(os.path.split(path_dest)[0]).mkdir(exist_ok=True, parents=True)
                convert(path, path_dest)


if __name__ == '__main__':
    compileCutscenes()
