#include <iostream>
#include <fstream>
#include <sstream>
#include "stats.h"
#include "lex.h"

using namespace std;

int main(int argc, char const *argv[]) {
    ifstream myInfile;

    if (argc < 2) {
        cout << "NO SPECIFIED INPUT FILE NAME." << endl;
        exit(1);
    }

    const string filename = argv[1];
    myInfile.open(filename);
    if (!myInfile) {
        cout << "CANNOT OPEN THE FILE " << filename << endl;
        exit(1);
    }

    if (argc > 2) {
        for (int i = 2; i < argc; i++) {
            Stats stats;
            string argument = argv[i];
            if (argument[0] == '-') {
                if (argument == "-kw") {
                    stats.kwFlag = true;
                } else if (argument == "-sp") {
                    stats.spFlag = true;
                } else if (argument == "-id") {
                    stats.idFlag = true;
                } else {
                    cout << "UNRECOGNIZED FLAG " << argv[i] << endl;
                    exit(1);
                }
            } else {
                cout << "UNRECOGNIZED FLAG " << argv[i] << endl;
            }
        }
    }

    if (myInfile.peek() == EOF) {
        cout << "File is Empty." << endl;
        exit(1);
    }


    return 0;
}