#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,d;
    cin >> a >> b;
    cout << a+b<< endl;
    cout << a-b<< endl;
    cout << a*b<< endl;
    if(b==0)
    {
        cout << "ERROR";
    }
    else{
        
    cout <<setprecision(2) << fixed<<(a/b)<< endl;
    }
    return 0;
}