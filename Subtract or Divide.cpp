#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
            int n;
         cin>>n;
	    int ans;
        if(n==1) ans=0;
        else if(n==2) ans = 1;
        else if(n==3) ans = 2;
        else if(n%2==0) ans = 2;
        else ans = 3;
        cout<<ans<<endl;

}
}

