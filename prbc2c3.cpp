#include <iostream>

using namespace std;

int main ()
{
    int i,j, t,n, k,s=1,dp[10001],coin[101];


    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        for (i = 1; i <= k; i++)
            dp[i] = 0;

        for (i = 1; i <= n; i++)
            cin>>coin[i];

     dp[0] = 1;

    for ( i = 1; i <= n; i++)
    {
        for (j = coin[i]; j <= k; j++)
        {
            dp[j] = (dp[j] + dp[j - coin[i]])%100000007;
        }
    }

        cout<<"Case "<<s++<<": "<<dp[k]<<endl;
    }

    return 0;
}
