//
// Created by Kingster on 7/20/2022.
//
#include <iostream>;
using namespace std;

int main() {
    int arr[4][4];
    bool isMagic = true;
    for (int i = 0; i<4; i++) {
        for (int k = 0; k < 4; k++) {
            cin >> arr[i][k];
        }
    }
    int temp;
    int num = arr[0][0] + arr[0][1] + arr[0][2] + arr[0][3];
    for (int i = 1; i < 4; i++) {
        temp = arr[i][0] + arr[i][1] + arr[i][2] + arr[i][3];
        if (temp != num) {
            isMagic = false;
        }
    }
    for (int i = 0; i< 4; i++) {
        temp = arr[0][i] + arr[1][i] + arr[2][i] + arr[3][i];
        if (temp != num) {
            isMagic = false;
        }
    }
    if (isMagic) {
        cout << "magic" << endl;
    } else {
        cout << "not magic" << endl;
    }
}