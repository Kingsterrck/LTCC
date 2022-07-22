#include <iostream>;
using namespace std;

int cal(int num1) {
    int hour = 12;
    int minute = 0;
    int count = 0;
    int unitHour,tenMinute,unitMinute;
    for (int i = 0; i < num1; i++) {
        minute++;
        if (minute >= 60) {
            minute = 0;
            hour++;
            if (hour >= 13) {
                hour = 1;
            }
        }
        tenMinute = minute / 10;
        unitMinute = minute % 10;
        if (hour >= 10) {
            unitHour = hour - 10;
            if (unitHour-1 == tenMinute - unitHour && tenMinute - unitHour == unitMinute - tenMinute) {
                count++;
            }
        } else {
            if (tenMinute - hour == unitMinute - tenMinute) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int num;
    cin >> num;
    int temp;
    temp = (int(num/720))*31+cal(num%720);
    cout << temp << endl;
}