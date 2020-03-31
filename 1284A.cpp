#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b,n,p;
cin>>a>>b;
string ar[a],br[b];
for(int i=0;i<a;i++)cin>>ar[i];
for (int i = 0; i < b; i++)
    cin >> br[i];
    cin>>n;
    for(int i=0;i<n;i++)
    {
cin>>p;p--;
cout<<ar[p%a]<<br[p%b]<<"\n";
    }
}