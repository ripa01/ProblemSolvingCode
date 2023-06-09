#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		ll a, b, c, i, j, k, m, n, o, x, y;
		string s, ss, ps;
		cin >> n >> s;
		bool ok = false;
		map<string, ll> mp;
		for(i=1; i<n; i++) {
			ss.clear();
			ss.push_back(s[i-1]);
			ss.push_back(s[i]);
			if(mp[ss]) ok = true;
			mp[ps]++;
			ps = ss;
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
}
