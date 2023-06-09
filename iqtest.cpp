#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t,b,p=0,q=0,index=0,in=0;
    cin>>t;
    for(int i=1;i<=t;i++){
       cin>>b;
       if(b%2==0){
        p++;
        index = i;
       } else {
           q++;
           in =i;
       }
    }

    if(p>q){
        cout<<in<<endl;
    } else cout<<index<<endl;


}
