//
// Created by Kingster on 7/20/2022.
//
#include <iostream>;
#include <string>;
using namespace std;

bool isPalin(string strrr) {
    int len = (strrr.size() +1)/2;
    for (int i = 0; i < len; i++) {
        if (strrr.at(i) != strrr.at(strrr.size()-1-i)) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    cin >> str;
    int leng = str.size();
    int max = 0;
    for (int a = leng; a >= 0; a--) {
        for (int k = 0; k < leng - a + 1; k++) {
            if (isPalin(str.substr(k, a))) {
                if (a > max) {
                    max = a;
                }
            }
        }
    }
    cout << max;
}