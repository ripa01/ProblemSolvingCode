#include <bits/stdc++.h>
using namespace std;


int main(){
	int a, b;

	cin>>a>>b;
	int n =1;
	for (int i = b; i < a; i++){
            n *= 32;
	}
	cout << n << endl;
	return 0;
}
