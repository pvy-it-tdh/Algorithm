#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if(a<0||a>100000)
    {
        cout << "INVALID";
    }
    else if (a%4==0 && a%100==0)
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}