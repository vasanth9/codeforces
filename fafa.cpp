#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,count=0;
    cin>>n;k=n/2;
    for(int i=1;i<=k;i++)
    {
        if((n-i)%i==0)count++;
    }
    cout<<count;
}