#include<bits/stdc++.h>
using namespace std;

int main(){
     int t,f=1,i;
    cin >> t;

	while(t--)
	{
		int  a;
		cin >> a;

		if (a%2 == 0)
			cout << a/2 << endl;
		else
		{
			cout <<(a + f)/2 << endl;
			f *= -1;
		}
	}
}
