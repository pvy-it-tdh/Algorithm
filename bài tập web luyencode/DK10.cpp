<<<<<<< HEAD
#include<iostream>
using namespace std;

int main() {
    int month, year;
    cin >> month >> year;

    if (month < 1 || month > 12 || year < 0) {
        cout << "INVALID";
    } else {
        int daysInMonth;
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            daysInMonth = 31;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            daysInMonth = 30;
        } else if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                daysInMonth = 29;
            } else {
                daysInMonth = 28;
            }
        }
        cout << daysInMonth;
    }

    return 0;
}
=======
#include<iostream>
using namespace std;

int main() {
    int month, year;
    cin >> month >> year;

    if (month < 1 || month > 12 || year < 0) {
        cout << "INVALID";
    } else {
        int daysInMonth;
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            daysInMonth = 31;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            daysInMonth = 30;
        } else if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                daysInMonth = 29;
            } else {
                daysInMonth = 28;
            }
        }
        cout << daysInMonth;
    }

    return 0;
}
>>>>>>> cc1732c24406653d5a812a99b387e384aa416f95
