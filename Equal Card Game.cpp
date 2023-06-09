#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c,d,p1,p2,t;
    cin>>t;
     while(t--)
    {
        cin>>a>>b>>c>>d;

        if((a*d)==(c*b))
            cout<<0<<endl;

          else {
            p1= a*d;
            p2= c*b;
            if(p2 != 0 && p1%p2 == 0){
                cout<<1<<endl;

            }
            else if(p1 != 0 && p2%p1 == 0){
                cout<<1<<endl;

            }
            else cout<<2<<endl;
          }
      }

        return 0;

}

