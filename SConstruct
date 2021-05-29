import os
import platform
import glob

env = Environment(CPPPATH=["lib/include", "src"])

sources = glob.glob("src/**/*.cpp", recursive=True)

windows_libs = [
    "msvcrt",
    "opengl32",
    "glfw3",
    "gdi32",
    "shell32",
    "user32"
]

for source in sources:
    obj = os.path.basename(source).replace(".cpp", ".obj")
    env.Object("bin/obj/%s" % obj, source)

env.Program("bin/protondev", Glob("bin/obj/*.obj"), LIBPATH="lib/{}".format(platform.system().lower()), LIBS=globals()["%s_libs" % platform.system().lower()])