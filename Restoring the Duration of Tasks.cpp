#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
            int n;
         cin>>n;
         int a[n+1],b[n+1];
         int ans=0;
         for(int i=0;i<n;i++){
            cin>>a[i];
         }
         for(int i=0;i<n;i++){
            cin>>b[i];
         }
         cout<< abs(a[0]-b[0])<<" ";
         for(int i=1;i<n;i++){\
            if(a[i]<b[i-1]){
                ans = abs(b[i]-b[i-1]);
            }
          else ans = abs(a[i]-b[i]);
            cout<<ans<<" ";
         }

        cout<<endl;

}
}
