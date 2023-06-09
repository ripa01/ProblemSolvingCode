#include<bits/stdc++.h>
using namespace std;


int main()
{

	int t; cin >> t;
	while(t--){
		int a[5],ct=0;
		cin>>a[0];
		for(int i=1;i<4;i++){
                cin>>a[i];
            if(a[0]<a[i]){
                ct++;
            }
		}

		cout<<ct<<endl;
	}
	return 0;
}




