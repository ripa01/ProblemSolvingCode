#include <iostream>
using namespace std;

int main()
{
    int k,n,w;
    cin >> k>>n>>w;
    long long d=0;

    for (int i = 1; i<=w ; i++)
    {
        d += k*i;
    }
  if(d<n)cout<< 0<<endl;
   else cout << d-n << endl;
    return 0;
}
