#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0;
    cin>>n;
    n--;
    string s[2]={"love","hate"};
    cout<<"I hate ";
    while(n--)
    {cout<<"that I "<<s[i%2]<<" ";
     i++;  
    }
    cout<<"it";
}