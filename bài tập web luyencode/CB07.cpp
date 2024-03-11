#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float r;
    cin >> r;
        
    cout <<setprecision(3) << fixed<<(2*3.14*r)<< " "<<(3.14*r*r);
    return 0;
}