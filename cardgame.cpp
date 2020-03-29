#include<bits/stdc++.h>
using namespace std;
int main()
{
    string c="NO";
    char a,b,d,e;
    cin>>a>>b;
    for(int i=0;i<5;i++)
    {
        cin>>d>>e;
        if(a==d||b==e)c="YES";
    }
    cout<<c;
}