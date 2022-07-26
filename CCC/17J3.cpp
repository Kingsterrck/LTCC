//
// Created by Kingster on 7/25/2022.
//
#include <iostream>;
#include <cmath>;
using namespace std;

int main() {
    int coord[2][2];
    for (int i = 0; i < 2; i++) {
        for (int k = 0; k < 2; k++) {
            cin >> coord[i][k];
        }
    }
    int deltaX = abs(coord[0][0] - coord[1][0]);
    int deltaY = abs(coord[0][1] - coord[1][1]);
    int step;
    cin >> step;
    if (step < deltaX + deltaY || (step - (deltaX+deltaY)) % 2 != 0) {
        cout << "N" << endl;
    } else {
        cout << "Y" << endl;
    }
}