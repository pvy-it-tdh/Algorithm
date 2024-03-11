#include<iostream>
using namespace std;
int main()
{
    long n;
    cin >> n;
    long sum =0;
    if(n<=0)
    {
        cout << "NO";

    }
    else{
        for (int i=1;i<=n/2;i++)
        {
                if(n%i==0)
                {
                    sum+=i;
                }

        }
        if(sum==n)
        {
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    return 0;
}