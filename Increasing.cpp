#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){

    int s;
	cin>>s;
	int a[s+1];

	for (int i = 0; i< s; i++){
		cin>>a[i];

	}
	sort(a,a+s);
	int cnt=0;
	for (int i = 0; i< s-1; i++){

                if(a[i]==a[i+1])
                    cnt = 1;

            }

	if(cnt==1){
        cout<<"NO"<<endl;
	} else cout<<"YES"<<endl;

}

}
