#include <iostream>
#include <cmath>
using namespace std;

int main() {

 int n,a,b,c,sum;
 cin>>n;
 for(int i=1;i<=n;i++){
    cin>> a>> b>> c;
    sum = pow(a,b);
  cout <<sum%c<< endl;
 }
  return 0;
}
