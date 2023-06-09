#include <bits/stdc++.h>
using namespace std;


int main()
{
    int r;
    cin>>r;
    while(r--){



        long long int l,n,p;
        cin>>n>>l>>p;

        if(n==l && l==p && p==n)
            cout<<"YES"<<endl;

        else if((n-1) <= l+p) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}

