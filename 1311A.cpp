#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin >> n;
    while (n--)
    {
       int a,b,out=1;
       cin>>a>>b;
       if(a>b){
           if((a-b)%2==0){
               out = 1;
              // cout << "z\n";
           }
           else out=2;
       }
       else if(b>a)
       {//cout<<"f";
           if ((b-a)%2 == 0)
           {//cout<<"z\n";
               out=2;
           }
           else out=1;

           
       }
       else out=0;
       cout<<out<<"\n";
    }
}