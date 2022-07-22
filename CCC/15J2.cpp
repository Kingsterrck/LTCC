//
// Created by Kingster on 7/7/2022.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin,str);

    int happy = 0;
    int sad = 0;
    for (int i = 0; i<str.size()-2;i++) {
        if (str.at(i) == ':' && str.at(i+1) == '-' && str.at(i+2) == ')') {
            happy++;
        } else if (str.at(i) == ':' && str.at(i+1) == '-' && str.at(i+2) == '(') {
            sad++;
        }
    }
    if (happy == 0 && sad == 0) {
        cout << "none";
    } else if (happy == sad) {
        cout << "unsure";
    } else if (happy > sad) {
        cout << "happy";
    } else {
        cout << "sad";
    }
}