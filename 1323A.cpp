#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)even.push_back(i+1);
            else odd.push_back(i+1);
        }
        int se=even.size(),so=odd.size();
        if(se>0)
        {
            cout<<se<<"\n";
            for(auto z:even)cout<<z<<" ";
           cout<<"\n";
        }
        else if(so%2==0)
        {
            cout << so << "\n";
            for (auto z : odd)
                cout << z << " ";
            cout << "\n";
        }
        else if(so>2)
        {so--;
            cout << so<< "\n";
            for (int i=0;i<so;i++)
                cout << odd[i] << " ";
            cout << "\n";
        }
        else cout<<"-1\n";

    }
}