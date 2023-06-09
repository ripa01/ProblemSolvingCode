#include <bits/stdc++.h>
using namespace std;

int main() {
  int n1, n2, n;
  cin>> n;
  for(int i =1;i<=n;i++){

  cin >> n1 >> n2;


  if ( n1 > n2) {
   cout <<"Case #"<<i<<":"<<(n1/n2)<<endl;

  }
else

 cout <<"Case #"<<i<<":"<<n2<<endl;
  }
  return 0;
}
