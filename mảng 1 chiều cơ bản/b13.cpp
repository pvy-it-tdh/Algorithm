#include <iostream>
#include <math.h> // Not recommended for C++, consider using <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *a = new int[n]; // Allocate memory for an array of n integers

    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // Read n integers into the array
    }

    long long tong = 0, tich = 1;

    for (int i = 0; i < n; i++)
    {
        tong += a[i];
        tich *= a[i];
    }

    cout << tong % (long)(pow(10,9) + 7) << endl; 
    cout << tich % (long)(pow(10, 9) + 7) << endl;

    delete[] a; // Deallocate memory to prevent memory leaks

    return 0;
}
