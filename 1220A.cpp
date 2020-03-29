#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ncount=0,zcount=0;char s;
    cin >> n ;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s=='n')ncount++;
        if(s=='z')zcount++;
    }
    for(int i=0;i<ncount;i++)cout<<"1 ";
    for (int i = 0; i < zcount; i++)
        cout << "0 ";
}