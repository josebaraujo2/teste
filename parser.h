#include <string>     // Para std::string
#include <iostream>   // Para std::cout, std::endl
#include <sstream>    // Para std::istringstream

vector<string> trataPlus(string tokenPlus){
    vector<string> vec;
    istringstream iss(tokenPlus);
    string s;
    while (getline(iss, s, '+')) {
        vec.push_back(s);
    }
    return vec;
}

void teste() {
    std::string linha = "ADD R1 R2";
    std::istringstream iss(linha);
    std::string token;

    while (getline(iss, token, ' ')) {
        if (token != " ") {
            std::cout << token;
        }
        std::cout << 'q';
    }
}

