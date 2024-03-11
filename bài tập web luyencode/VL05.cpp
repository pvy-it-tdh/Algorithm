<<<<<<< HEAD
#include<iostream>
using namespace std;

int tong(int n) {
    int result = 0;
    for (int i = 1; i <= 3*n+1; ++i) {
        if (i % 2 == 0) {
            result -= i;
        } else {
            result += i;
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << tong(n);
    return 0;
}
=======
#include<iostream>
using namespace std;

int tong(int n) {
    int result = 0;
    for (int i = 1; i <= 3*n+1; ++i) {
        if (i % 2 == 0) {
            result -= i;
        } else {
            result += i;
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << tong(n);
    return 0;
}
>>>>>>> cc1732c24406653d5a812a99b387e384aa416f95
