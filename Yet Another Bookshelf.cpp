#include<bits/stdc++.h>
using namespace std;


int main()
{

	int t; cin >> t;
	while(t--){
		int n;
		cin>>n;
		int ar[n+1];

		for(int i=0;i<n;i++){
            cin>>ar[i];
		}
		int ans = -1, in = -1;
        for(int i=0;i<n;i++){
            if(ar[i]==1){
                if(ans==-1) ans = 0, in = i;
                else{
                    if(ar[i-1]==0) ans += (i-in-1);
                    in = i;
                }
            }
        }
        cout<<ans<<endl;

}
}
