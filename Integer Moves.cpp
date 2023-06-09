#include<bits/stdc++.h>
using namespace std;


int main()
{

	int t; cin >> t;
	while(t--){
		int x,y;
		cin>>x>>y;
		int s = x*x + y*y;
		int t = sqrt(s);
		if(x == 0 && y==0){
            cout<<0<<endl;

		}
		else if((t*t) == s){
            cout<<1<<endl;
		}
		else cout<<2<<endl;
	}
	return 0;
}


