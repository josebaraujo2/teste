#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
#include <string>
#include "parser.h"

using namespace std;

int main(int argc, char *argv[]){
    std::string op = argv[1];
    std::string arquivo = argv[2];
    std::string file_name = arquivo.substr(0, arquivo.find_last_of('.'));
    std::string extension;
    string objeto;

    // vector<vector<string>> programa = tokenParser(arquivo);

    if(op == "-p"){ // .PRE
        // preprocess(programa);
        // createFile(programa, file_name, ".PRE");
        cout << 'q';
        return 0;
    }

    teste();
    return 0;
}
