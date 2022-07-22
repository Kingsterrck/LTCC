//
// Created by Kingster on 7/22/2022.
//
#include <iostream>;
using namespace std;

int main() {
    int num;
    cin >> num;
    int tenHour = 1;
    int unitHour = 2;
    int tenMinute = 0;
    int unitMinute = 0;
    int count = 0;
    for (int i = 0; i < num; i++) {
        unitMinute++;
        if (unitMinute >= 10) {
            unitMinute = 0;
            tenMinute ++;
            if (tenMinute >= 6) {
                tenMinute = 0;
                unitHour ++;
                if (tenHour == 1 && unitHour == 3) {
                    tenHour = 0;
                    unitHour = 1;
                    tenMinute = 0;
                    unitMinute = 0;
                } else if (unitHour >= 10) {
                    unitHour = 0;
                    tenHour ++;
                }
            }
        }
        if (tenHour == 0) {
            if (tenMinute - unitHour == unitMinute - tenMinute) {
                count++;
            }
        } else {
            if (tenMinute - unitHour == unitMinute - tenMinute && unitHour - tenHour == tenMinute - unitHour) {
                count++;
            }
        }
    }

    cout << count << endl;
}