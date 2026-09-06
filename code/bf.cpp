#include "h/filep.h" 
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[]){
    if(argc==3){
        string bff=getfile(argv[1]);
        int hps=0;
        genfile("brainfuck-fumei-ddq-gb-cplusplus-cpp.cpp","#include <cstdio>\nint memory[9999999];\nint main()\n{\n    int prt=0;");
        for(int i=0;i<bff.size();i++){
            char cbf=bff[i];
            if(cbf=='>') plsfile("brainfuck-fumei-ddq-gb-cplusplus-cpp.cpp","\n    prt++;");
            else if(cbf=='<') plsfile("brainfuck-fumei-ddq-gb-cplusplus-cpp.cpp","\n    prt--;");
            else if(cbf=='+') plsfile("brainfuck-fumei-ddq-gb-cplusplus-cpp.cpp","\n    memory[prt]++;");
            else if(cbf=='-') plsfile("brainfuck-fumei-ddq-gb-cplusplus-cpp.cpp","\n    memory[prt]--;");
            else if(cbf=='.') plsfile("brainfuck-fumei-ddq-gb-cplusplus-cpp.cpp","\n    putchar(memory[prt]);");
            else if(cbf==',') plsfile("brainfuck-fumei-ddq-gb-cplusplus-cpp.cpp","\n    memory[prt]=getchar();");
            else if(cbf=='[') plsfile("brainfuck-fumei-ddq-gb-cplusplus-cpp.cpp","\n    while(memory[prt]){");
            else if(cbf==']') plsfile("brainfuck-fumei-ddq-gb-cplusplus-cpp.cpp","\n    }");
            else plsfile("brainfuck-fumei-ddq-gb-cplusplus-cpp.cpp","/*note*/");
        }
        plsfile("brainfuck-fumei-ddq-gb-cplusplus-cpp.cpp","\n    return 0;\n}");
        string fn=argv[1];
        string arg = argv[2];
        string stm="g++ brainfuck-fumei-ddq-gb-cplusplus-cpp.cpp -o "+arg;
        system(stm.c_str());
        system("del brainfuck-fumei-ddq-gb-cplusplus-cpp.cpp");
    }
    else{
        clog<<"Error: No input files\n";
    }
    return 0;
}
