# Brainfxxk-compiler: A compiler that turns Brainfuck code into a Windows executable
The compiler of Brainfxxk

Compile command is `"bf xxx.bf xxx.exe"`
## 1. Installation

You need to download another compiler from [Mingw official website](https://www.mingw-w64.org) and add it to the environment variables.

Download the "./bin/bf.exe",

Press Win + R, type sysdm.cpl, and hit Enter.

Go to the Advanced tab → click Environment Variables.

Under System variables (or User variables), find and select Path, then click Edit.

Click New and paste the full path to your bin folder.

For example, if your project is at C:\Program Files\Brainfxxk-compiler\bin, add:

```path
C:\Program Files\Brainfxxk-compiler\bin\
```

## 2. Open source code
Download "./code/bf.cpp" and "./code/h/filep.h"
