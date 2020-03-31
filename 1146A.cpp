#include<bits/stdc++.h>
using namespace std;
int main()
{string s;
cin>>s;

    int length=s.length(),c=0;
   // cout<<length<<"\n";
    for(int i=0;i<length;i++)
    {
        if(s[i]=='a')
        c++;
    }
    //cout<<c;
    if(c>length/2)
    {
        cout<<length;
    }
    else
    {cout<<2*c-1;
    }
    
}