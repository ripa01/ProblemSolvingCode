#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,n,a;
    cin>>t;
    while(t--){
        cin>>n;
        set<int>s;
        for (int i=0; i<n;i++) {
            cin>>a;
            s.insert(a);
        }
        if(s.size()==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
