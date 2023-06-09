#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,m,l,i;
	cin>>n>>m;
	int a[n+1];
	set <int> s;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	for(i=n;i>=1;i--){
		s.insert(a[i]);
		a[i]=s.size();
	}
	for(i=1;i<=m;i++){
		cin>>l;
		cout<<a[l]<<endl;
	}
	return 0;
}
