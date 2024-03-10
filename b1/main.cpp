#include<iostream>
using namespace std;
bool prime ( long long x)
{
    if(x<2) return 0;
    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0) return 0;
    }
    return 1;
}
int main()
{
    long long n;
    cin>>n;
    if(prime(n)) cout<<"yes";
    else cout<<"no";
    return 0;
}
