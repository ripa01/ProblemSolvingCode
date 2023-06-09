#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	while (t--){
		int n;
		cin>>n;
		int p = sqrt(n);
		int q = cbrt(n);
		int r= sqrt(cbrt(n));
		cout<<p << q << r <<endl;

		cout<<(p+q-r)<<endl;

	}
}

