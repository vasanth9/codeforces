#include<bits/stdc++.h>
using namespace std;
long long int t,n,k;
string ans;
void solve()
{
    cin>>n>>k;
    if(n%2==0&&k%2==1||n%2==1&&k%2==0)
    {
        ans="NO";
    }
    else
    {
        ans="YES";
    }
    
}
int main()
{
    cin>>t;
    while(t--)
    {
        solve();
        cout<<ans<<"\n";
    }
}