#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,sum=0;
    int s;
    map<int,int> mp;
    cin>>n;
    int c=INT_MIN;
    for(int i=1;i<=n;i++) cin>>s,mp[s]++;
    for(auto i: mp)
    {
        c = max(c,i.second);
    }
    cout<<c<<endl;
    return 0;
}

