#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,ans;

        cin>>a;
        if((a%2) != 0){
            ans = (a/2)+1;
            cout<<ans<<endl;
        }
        else if(a==0){
            cout<<a<<endl;
        }
        else {
            cout<<a+1<<endl;
        }

        return 0;

}
