#include <iostream>
using namespace std;

int main() {
    int range[4];
    int temp;
    for (int i = 0; i<4; i++) {
        cin >> temp;
        range[i] = temp;
    }
    int num[5]={0,0,0,0,0};
    int count;
    for (int i = 0; i < 5; i++) {
        for (int k = 0; k < 5; k++) {
            num[k] = 0;
        }
        for (int k = i-1; k >= 0; k--) {
            num[k] = num[k+1]+range[k];
        }
        for (int k = i+1; k < 5; k++) {
            num[k] = num[k-1] + range[k-1];
        }
        for (int k = 0; k < 5; k++) {
            cout << num[k] << " ";
        }
        cout << endl;
    }
}