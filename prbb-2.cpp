#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,j,flag=0,x=0,y=0;
        cin>>n;

        string s;
        cin>>s;
        for(j=0; j<n; j++)
        {
            if(s[j]=='U')
            {
                y++;
            }

            else if(s[j]=='R')
            {
                x++;
            }

            else if(s[j]=='D')
            {
                y--;
            }

            else if(s[j]=='L')
            {
                x--;
            }

            if(x==1 && y==1)
            {
                flag=1;
                break;
            }
        }

        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
}

