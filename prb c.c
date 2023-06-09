#include<bits/stdc++.h>
using namespace std;

int main(){

    int a;

    cin>>a;

    for(int i=1; i<=a; i++){

                  int N, K, P;

                  cin>>N>>K>>P;

                  int val = (K+P)%N;

                  if(val==0)

                            val = N;

                  cout<<"Case "<<i<<": "<<val<<endl;

    }

    return 0;

}
