#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,sum=0;
    string s;
    map<string,int> mp;
    cin>>n;

    for(int i=1;i<=n;i++) cin>>s,mp[s]++;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        if(mp[s]) mp[s]--;
        else sum++;
    }
    cout<<sum<<endl;
    return 0;
}
