#include<bits/stdc++.h>
using namespace std;
int main()
{int n;
cin>>n;
while(n--)
{int c=0;
    string s;
    cin>>s;
    int l=s.length();
    vector<int>one;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='1')
        {
            one.push_back(i);
        }
    }
    int p=one.size();
    if(p>1)
    {
        int out=0;
        for(int i=0;i<p-1;i++)
        {
            out+=(one[i+1]-one[i]-1);
        }cout<<out<<"\n";
    }
    else cout<<"0\n";
}
}