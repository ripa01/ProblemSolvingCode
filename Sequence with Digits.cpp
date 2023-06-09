#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

       long long int a,n,mi,ma,i;
        cin>>a>>n;
        while(--n){
            string s= to_string(a);
            mi=INT_MAX;
            ma=INT_MIN;

            for(i=0;i<s.size();i++){
                mi=min(mi,(long long)s[i]-'0');
                ma=max(ma,(long long)s[i]-'0');
            }
            if(mi==0 || ma ==0) break;
            a+=mi*ma;
        }
        cout<<a<<endl;
    }
}

