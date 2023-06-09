#include<bits/stdc++.h>
using namespace std;

void solve()
{
     int x,y,a;
       cin>>x>>y;
       vector<int> v;
       for(int i=0;i<x*2;i++){
        cin>>a;
        v.push_back(a);
       }
       sort(v.begin(),v.end());

       for(int i = 0, j = x; j < x*2; j++, i++){
		if((v[j]-v[i]) < y){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
	return;

}

int main()
{

	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}




