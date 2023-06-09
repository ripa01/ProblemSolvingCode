#include <bits/stdc++.h>

using namespace std ;
int n,t;
string s;

int main()
{
    cin>>t;
    bool f=0;
    while (t--)
    {
        cin>>n>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]!=s[i+1])
            {
                for(int j=i+2; j<n; j++)
                {
                    if(s[j]==s[i])
                    {
                        f=1;
                        break;
                    }
                }
            }
        }
        if(f==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        f=0;
    }
    return 0 ;
}

