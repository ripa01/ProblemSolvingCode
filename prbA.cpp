#include<bits/stdc++.h>
using namespace std;


int main()
{
 int t;
    cin>>t;
    while(t--){
        int n,cnt=0,dif=0,d=0;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a[0],a[n-1]);


        for(int i=0;i<n;i++){

            d = a[n-1] - a[i];

               if(dif<=d){
                  cnt += 2;
                  dif = d;
               }


        }
        cout<<cnt<<endl;

    }
    return 0;

}
