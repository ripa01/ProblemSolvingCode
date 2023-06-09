#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);

        int dif = 0;

        for(int i=1;i<=n;i++){

            int dif2 = a[n-1] - a[i];

               if(dif<=dif2){
                  cnt *= i;
                  dif = dif2;
               }


        }
        cout<<cnt<<endl;

    }
    return 0;

}


