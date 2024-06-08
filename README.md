# GP2Y0A21YK_lib
GP2Y0A21YK library for Arduino. This library works with Arduino nano every and others.

# Install
Download zip and install using IDE.

Reference to: https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries/

# How to use
Please try execute "example/BasicUsage".

# Developers info.
When you fork and develop these sample code for the library, you can avoid placing the ".ino" file in the root folder of the project by creating an "arduino.json" file as shown below.

## .vscode/arduino.json (VSCode for Windows)
```json
{
    "buildPreferences": [
        [
            "compiler.c.extra_flags",
            "-Wall -Isrc"
        ],
        [
            "compiler.cpp.extra_flags",
            "-Wall -Isrc"
        ]
    ],
    "prebuild":  "xcopy /Y /E /I %CD%\\src %CD%\\examples\\BasicUsage\\src",
    "postbuild": "rmdir /S /Q %CD%\\examples\\BasicUsage\\src",
    "output": ".build",
    "board": "arduino:megaavr:nona4809",
    "sketch": "examples\\BasicUsage\\BasicUsage.ino"
}
```
### For example
When target name is "sample_demo.ino", you will modify to json as below.

`"prebuild":  "xcopy /Y /E /I %CD%\\src %CD%\\examples\\sample_demo\\src",`

`"postbuild": "rmdir /S /Q %CD%\\examples\\sample_demo\\src",`

`"sketch": "examples\\sample_demo\\sample_demo.ino"`

The `board` changes depending on the user's environment.
