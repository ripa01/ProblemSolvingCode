#include <bits/stdc++.h>
using namespace std;

   int main(void)
{
    int t,n,m;
   cin>>t;

    while(t--){

        cin>>n>>m;

        for(i=0;i<m;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(i=0,j=1;i<n,j<n;i++,j++){
            if(arr[i]==arr[j]){
            cnt++;
            break;
            }
           else {
                cnt=0;
            }

        }
    if(cnt==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }

return 0;
    }





