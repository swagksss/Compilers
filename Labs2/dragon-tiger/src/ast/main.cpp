#include "util/errors.hh"
#include <iostream>
#include <string>

int main(int argc, char** argv) {
    bool evalFlag = false;
    bool dumpASTFlag = false;

    for (int i = 1; i < argc; ++i) {
        std::string arg(argv[i]);
        if (arg == "-e") {
            evalFlag = true;
        } else if (arg == "--dump-ast") {
            dumpASTFlag = true;
        }
    }

    if (evalFlag && dumpASTFlag) {
        util::fatal_error("Both -e and --dump-ast cannot be used together");
    }

 
    return 0;
}
