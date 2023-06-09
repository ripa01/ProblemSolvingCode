#include<bits/stdc++.h>
using namespace std;


int main()
{
 int t;
    cin>>t;
    while(t--)
    {
       int n,m,ans=0;
        cin>>n>>m;
      int sum = 2;
      for(int i=1;i<m;i++){
            sum = sum*2;

        }

        for(int i=0;i<n;i++){
           sum = sum-(sum/2);

        }

        cout<<sum<<endl;

    }

    return 0;

}

