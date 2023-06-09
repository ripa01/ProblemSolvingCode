#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n, x, sum = 0, ans = -1,i;
      cin >> n >> x;
      vector<int> a(n);
     for (i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if (sum % x != 0)
                ans = max(ans, i + 1);
        }
        sum = 0;
        for ( i = n - 1; i >= 0; i--){
            sum += a[i];
            if (sum % x != 0)
                ans = max(ans,n - i);
        }
        cout << ans << endl;
    }
    return 0;
}
