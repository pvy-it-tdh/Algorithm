<<<<<<< HEAD
#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int giaithua(int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    return n * giaithua(n - 1);
}

int main() {
    double x; // Sửa kiểu dữ liệu thành double
    int n;
    cin >> x >> n;

    double sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += pow(x, i) / giaithua(i); // Sửa cách tính giá trị mũ và giai thừa
    }

    cout << setprecision(2) << fixed << sum;
    return 0;
}
    
=======
#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int giaithua(int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    return n * giaithua(n - 1);
}

int main() {
    double x; // Sửa kiểu dữ liệu thành double
    int n;
    cin >> x >> n;

    double sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += pow(x, i) / giaithua(i); // Sửa cách tính giá trị mũ và giai thừa
    }

    cout << setprecision(2) << fixed << sum;
    return 0;
}
>>>>>>> cc1732c24406653d5a812a99b387e384aa416f95
