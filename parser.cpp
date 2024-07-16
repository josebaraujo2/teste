#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
#include <string>

void teste(){
    string iss = 'ADD R1 R2';

    while (getline(iss, token, ' ')){
        token = token.c_str();
        if (token.find_first_not_of(' ') != string::npos){ // remove espaços desnecessarios
            cout << 'r';}
        cout << 'q';
    }
}
