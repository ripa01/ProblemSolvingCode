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
        int ans = n/2;

        if((n%2) == 0) {

        cout<<(ans-1)<<endl;}

        else cout<<ans<<endl;

    }

    return 0;

}
