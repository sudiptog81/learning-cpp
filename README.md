# Learning C++ in 7 Days

Code was successfully compiled on G++ and Visual C++ 2017.

## Visual Studio Code Settings

### Debugger Settings

```json
{
  "version": "0.2.0",
  "configurations": [
    {
      "name": "Launch",
      "type": "cppdbg",
      "request": "launch",
      "program": "${workspaceFolder}/a.exe",
      "args": [],
      "stopAtEntry": true,
      "cwd": "${workspaceFolder}",
      "environment": [],
      "externalConsole": true,
      "MIMode": "gdb",
      "miDebuggerPath": "C:\\mingw\\bin\\gdb.exe",
      "setupCommands": [
        {
          "description": "Enable pretty-printing for gdb",
          "text": "-enable-pretty-printing",
          "ignoreFailures": true
        }
      ],
      "preLaunchTask": "build"
    },
    {
      "name": "Launch w/ Linking",
      "type": "cppdbg",
      "request": "launch",
      "program": "${workspaceFolder}/a.exe",
      "args": [],
      "stopAtEntry": true,
      "cwd": "${workspaceFolder}",
      "environment": [],
      "externalConsole": true,
      "MIMode": "gdb",
      "miDebuggerPath": "C:\\mingw\\bin\\gdb.exe",
      "setupCommands": [
        {
          "description": "Enable pretty-printing for gdb",
          "text": "-enable-pretty-printing",
          "ignoreFailures": true
        }
      ],
      "preLaunchTask": "build with linking"
    }
  ]
}
```

### Build Settings

```json
{
  "version": "2.0.0",
  "tasks": [
    {
      "label": "build",
      "type": "shell",
      "command": "g++",
      "args": ["-g", "\"${relativeFile}\""],
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "presentation": {
        "echo": true,
        "reveal": "silent",
        "focus": false,
        "panel": "shared",
        "showReuseMessage": false,
        "clear": true
      }
    },
    {
      "label": "build with linking",
      "type": "shell",
      "command": "$cmdargs = read-host \"Files to be linked: \"; g++ -g ${relativeFile} $cmdargs",
      "args": [],
      "group": "build",
      "presentation": {
        "echo": true,
        "reveal": "silent",
        "focus": true,
        "panel": "shared",
        "showReuseMessage": false,
        "clear": true
      },
      "problemMatcher": ["$gcc"]
    }
  ]
}
```

### C/C++ Extension Settings

```json
{
  "configurations": [
    {
      "name": "Win32",
      "includePath": ["${workspaceFolder}/**"],
      "defines": ["_DEBUG", "UNICODE", "_UNICODE"],
      "windowsSdkVersion": "10.0.17763.0",
      "compilerPath": "C:\\MinGW\\bin\\g++.exe",
      "cStandard": "c11",
      "cppStandard": "c++17",
      "intelliSenseMode": "gcc-x64"
    }
  ],
  "version": 4
}
```
