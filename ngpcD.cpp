#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,n,a,b;
    cin>>x;
    for (int i=1; i<=x; i++)
    {
       int cnt =0,ans;
        cin>>n>>a>>b;
        for(int i=a; i<=b; ++i)
        {
            if(b%i==0)
               cnt++;
        }
    if(n<cnt)
    ans = (cnt*n)-1;

    else ans =0;

    cout<<(ans%1000000007)<<endl;
    }

    return 0;
}
