
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c,d,a1,a2,ans;

        cin>>a>>b>>c>>d;
       a1 = max(a,b);
       a2 =max(c,d);
       ans =max(a1,a2);
       cout<<ans<<endl;

        return 0;

}
