#include <bits/stdc++.h>
using namespace std;
int main()
{int n,sc=0,fc=0;
cin>>n;
    string s;
    cin >> s;
    for(int i=0;i<n;i++)
    {//cout<<s[i];
        if(s[i]=='S'&&s[i+1]=='F')
        {
            sc++;
        }
        if (s[i+1] == 'S' && s[i] == 'F')
        {
            fc++;
        }
    }
    if(sc>fc)cout<<"YES";
    else cout<<"NO";

}