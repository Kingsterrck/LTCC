//
// Created by Kingster on 7/22/2022.
//
#include <iostream>;
#include <cmath>;
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int sum = a;
    for (int i = 0; i < b; i++) {
        sum += (a * pow(10,i+1));
    }
    cout << sum << endl;
}