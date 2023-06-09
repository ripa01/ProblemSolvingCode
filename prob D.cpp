#include<bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin>> n>>m;
		int arr[n];
		string s;
		for(int i=0;i<n;i++){
            cin>> arr[i];
		}
		for(int i=0;i<m;i++){
            s += 'B';
		}
		for(int i=0;i<n;i++){
            int a =  arr[i] - 1;
            int b = (m-1)+1 - arr[i];
            int j = min(a,b);
            if(s[j]== 'A'){
                int k = max(a,b);
                s[k] = 'A';
            }else s[j]= 'A';
		}
		cout<<s<<endl;
	}
}
