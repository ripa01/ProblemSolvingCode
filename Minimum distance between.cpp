#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    vector<int> v;
	    bool flag=0;
	    for(int i=0; i<n; i++){

	            if(s[i]=='1'){

	            v.push_back(i);
	        }

	    }
	    int l = v[v.size()-1];
	    for(int i=0; i<v.size(); i++){

	            if((l-v[i]) %2 != 0){
	               flag =1;
	                break;


	        }
	    }
	   if(flag == 0) cout<<2<<endl;

	    else
	    cout<<1<<endl;

	}
	return 0;
}
