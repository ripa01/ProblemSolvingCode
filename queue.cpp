#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,m,k,i,t1;
	cin>>n;
	cin>>m;
	queue<int>a;
	for(i=0;i<m;i++)
	{
		cin>>t1;
	    a.push(t1);
	}
	cin>>k;
	queue<int>b;
	for(i=0;i<k;i++)
	{
		cin>>t1;
		b.push(t1);
	}int t=0;
	while(a.size()!=0 && b.size()!=0)
	{
		if(a.front()>b.front())
		{
			a.push(b.front());
			a.push(a.front());
		}else
		{
			b.push(a.front());
		    b.push(b.front());
		}
		a.pop();
		b.pop();t++;
		if(t>1000)
		{
			cout<<"-1";return 0;
		}
	}
	if(a.size())cout<<t<<" "<<"1";else cout<<t<<" "<<"2";
}
