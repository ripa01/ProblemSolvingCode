#include <bits/stdc++.h>
using namespace std;

int main()
{
       int t,a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
cout<<max({0,b-a+1,c-a+1})<<" "<<max({a-b+1,0,c-b+1})<<" "<<max({a-c+1,b-c+1,0})<<endl;
	}
}
