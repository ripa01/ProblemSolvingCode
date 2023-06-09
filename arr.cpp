#include<bits/stdc++.h>
using namespace std;


int main()
{
 int t;
    cin>>t;
    while(t--)
    {
        int a;
       cin>>a;
       int b[a+1],f=0;
       for(int i=1;i<=a;i++){
          cin>>b[i];
       }
     for(int i=1;i<=a;i++){
          if((b[i]%i) < (b[i+1]%(i+1))){
            f++;

          }
       }

            cout<<f<<endl;

    }
    return 0;

}
