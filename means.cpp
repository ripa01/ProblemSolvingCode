#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

       long long int n;
        cin>>n;
        int a[n*2];
        n =n*2;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int x = 0,y = n-1;
       while(x<y){
        cout<<a[x++]<<" ";
        cout<<a[y--]<<" ";
       }
       cout<<endl;
    }
}


