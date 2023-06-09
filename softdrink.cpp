#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, k, l, c, d, p, nl, np,a1=0,a2=0,a3=0,a4=0,r;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    a1 = k*l;
    a2= a1/nl;
    a3= c*d;
    a4= p/np;
     r= min(a2,min(a3,a4))/n;


        cout<<r<<endl;


}
