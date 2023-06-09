
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,l = 0,p = 1;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] >= a[i-1])
        {
          l++;
          p = max(p, l);
        }
        else
        {
            l = 1;
        }
    }
    cout << p<<endl;
}
