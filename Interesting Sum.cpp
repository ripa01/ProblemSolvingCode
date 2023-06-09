#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    vector<ll>ans=a;
    sort(ans.begin(),ans.end());
    cout<<ans[n-2]+ans[n-1]-ans[0]-ans[1]<<endl;
}



int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
}
