//
// Created by Kingster on 7/25/2022.
//
#include <iostream>
//#include <string>
using namespace std;

int main() {
    bool stat = true;
    int ftd,dig1,dig2;
    bool last = false; //true is left and false is right
    string num;
    while (stat) {
        cin >> num;
        if (num == "99999") {
            stat = false;
        } else {
            dig1 = stoi(num.substr(0,1));
            dig2 = stoi(num.substr(1,1));
            ftd = dig1 + dig2;
            if (ftd == 0) {
                if (last) {
                    cout << "left " << num.substr(2,3) << endl;
                } else {
                    cout << "right " << num.substr(2,3) << endl;
                }
            } else if (ftd % 2 == 0) {
                cout << "right " << num.substr(2,3) << endl;
                last = false;
            } else {
                cout << "left " << num.substr(2,3) << endl;
                last = true;
            }
        }
    }
}