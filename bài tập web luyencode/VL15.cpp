#include <iostream>
#include <cmath>

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int a, b;
    std::cin >> a >> b;

    if (b == 0 || (a == 0 && b == 0)) {
        std::cout << "INVALID";
    } else if (a % b == 0) {
        std::cout << a / b;
    } else {
        int c = gcd(a, b);
        if (b / c < 0) {
            std::cout << a / c * -1 << " " << b / c * -1;
        } else if (a / c > 0 && b / c > 0) {
            std::cout << a / c << " " << b / c;
        }
    }

    return 0;
}
