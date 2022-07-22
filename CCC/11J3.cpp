//
// Created by Kingster on 7/20/2022.
//
#include <iostream>;
using namespace std;

int main() {
    int a,b,temp;
    cin >> a;
    cin >> b;
    int count = 2;
    while (a>b) {
        temp = b;
        b = a - b;
        a = temp;
        count ++;
    }
    cout << count << endl;
}