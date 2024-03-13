#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    set<int>se;
    for(int x: a)
    {
        se.insert(x); // long(N)
    }
    cout << se.size();
}