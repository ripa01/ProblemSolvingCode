
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c,d,p1,p2,ans,s;

        cin>>a>>b>>c>>d;
        p1=max(a,c);
        p2=b+d;


            ans = ((p2+2)*2)+(p1*2);
            cout<<ans<<endl;

        return 0;

}
