#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int x;
        cin>>x;
        string s,ss;
        cin>>s>>ss;

        sort(s.begin(),s.end());
        sort(ss.begin(),ss.end());


        if(s==ss)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

}
