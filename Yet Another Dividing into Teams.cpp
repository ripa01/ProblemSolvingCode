#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;
    while(t--)
    {
    int n ; cin>> n;
	vector<int> v(n);

	for(int &x : v) cin >> x ;
	sort(v.begin() , v.end());
	int team = 1;

	for(int i = 1 ; i < n ; i++){
		if(abs(v[i]-v[i-1]) <= 1){
			team = 2;
			break ;
		}
	}

	cout << team << endl ;
}


}
