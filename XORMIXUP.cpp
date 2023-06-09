#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n, k[100];
        cin>>n;
        int x;
        for(int i = 0; i < n; i++)
        {
            cin>>k[i];
        }
        int t=0;
        for(int i = 0; i < n; i++)
        {

            for(int j = 0; j < n; j++)
            {
                if(i==j)continue;

                t ^= k[j];
            }
            if(t == k[i])
            {
                x=k[i];
                break;
            }

        }
 cout<<x<<endl;
    }
}

