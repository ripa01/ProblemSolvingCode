#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;

    cin>>t;
    string a;

    for (int i=0; i<t; i++)
    {
        cin>>a;
        int m = a.size();
        if(m%2 != 0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(a.substr(0,m/2)== a.substr(m/2,m/2)) //substr(position,size)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }
    }



}
