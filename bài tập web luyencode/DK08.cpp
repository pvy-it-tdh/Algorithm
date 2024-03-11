#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b;
    string s;
    cin >> a >> s >> b;
    if(s=="+")
    {
        cout << setprecision(2)<< fixed<< a+b;
    }
     if(s=="-")
    {
        cout<< setprecision(2)<< fixed << a-b;
    }
     if(s=="*")
    {
        cout << setprecision(2)<< fixed<< a*b;
    }
     if(s=="/")
    {
        if(b==0)
        {
            cout << "Math Error";
        }
        else{
        cout << setprecision(2)<< fixed << a/b;
        }
    }
    return 0;
}