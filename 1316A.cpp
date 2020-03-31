#include<bits/stdc++.h>
using namespace std;
int main()
{int n;

    cin>>n;
    while(n--)
    {
        int t,m,a,x=0;
        cin>>t>>m;
        while(t--)
        {
            cin>>a;
            x+=a;
        }
        if(m>x)cout<<x<<"\n";
        else cout<<m<<"\n";

    }
}