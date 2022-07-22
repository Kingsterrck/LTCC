//
// Created by Kingster on 7/7/2022.
//
#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int antonia = 100;
    int david = 100;
    int temp1;
    int temp2;
    for (int i = 0; i < a; i++) {
        cin >> temp1 >> temp2;
        if (temp1 > temp2) {
            david -= temp1;
        } else if (temp1 < temp2) {
            antonia -= temp2;
        }
    }
    cout << antonia << endl;
    cout << david;
}