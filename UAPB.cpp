#include<bits/stdc++.h>
using namespace std;


int main()
{
    int cnt=0;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]==s[i+1])
        {
            cnt++;
            if(cnt==6)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else
        {
            cnt=0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
