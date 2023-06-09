#include<bits/stdc++.h>
using namespace std;


int main()
{
    int s;

    cin>>s;
    int c[s];
    for(int i=1; i<=s; i++)
    {
        cin>>c[i];
    }

    for(int i=1; i<=s; i++)
    {
        for(int j=1; j<=s; j++)
        {

            if(c[j] == i)
            {
                cout<< j <<" ";
            }
        }
    }

    return 0;
}
