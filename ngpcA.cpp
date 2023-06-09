#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,a1,a2,b1,b2,c1,c2,d1,d2,area,i,q;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        d1=c1+a1-b1;
        d2=c2+a2-b2;
        q=((a1*b2)+(b1*c2)+(c1*d2)+(d1*a2))-((a2*b1)+(b2*c1)+(c2*d1)+(d2*a1));
        if(q<0)
            q*=-1;
              area=0.5*q;
        cout<<"Case "<<i<<": "<<d1<<" "<<d2<<" "<<area<<endl;

    }
}
