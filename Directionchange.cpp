#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==1 && b==1)cout<<0<<endl;
        else if((a==2 && b==1)||(a==1 && b==2))cout<<1<<endl;
        else if(a==1 || b==1)cout<<-1<<endl;
        else
        {
            int x=min(a,b);
            int y=max(a,b);
            int ans = (x-1)*2;

            if((y-x)%2==0) ans = (x-1)*2 + (y-x)*2;
            else ans = (x-1)*2 + (y-x)*2-1;
            cout<<ans<<endl;
        }
    }
}
