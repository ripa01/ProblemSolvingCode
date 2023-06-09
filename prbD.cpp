#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long n,i,k=1;

    cin>>n;

    for(i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            k=0;
            break;
        }

    }
    if(k==1) i=n;
    cout<<(n-i)/2 +1<<endl;
}
