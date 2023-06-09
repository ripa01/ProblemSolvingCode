#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,z,a,b,c;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        int cnt =0,ans;
        cin>>x>>y>>z>>a>>b>>c;

  for(int i=1; i<=x; ++i){
       if(a>x && c>z)
        {
          cnt++;
          a =  a/2;
          c =  c*2;

        }

        }
        cout<<cnt<<endl;


    }
    return 0;
}

