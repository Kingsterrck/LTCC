//
// Created by Kingster on 2022/7/23.
//
#include <iostream>;
#include <cmath>;
using namespace std;

int main() {
    int range[4];
    int temp;
    for (int i = 0; i<4; i++) {
        cin >> temp;
        range[i] = temp;
    }
    int count;
    for (int i = 0; i < 5; i++) {
        for (int k = 0; k < 5; k++) {
            count = 0;
            if (k > i) {
                for (int q = i; q < k; q++) {
                    count += range[q];
                }
                cout << count << " ";
            } else if (k == i) {
                cout << 0 << " ";
            } else {
                for (int q = k; q < i; q++) {
                    count += range[q];
                }
                cout << count << " ";
            }

        }
        cout << endl;
    }
}