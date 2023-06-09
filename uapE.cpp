#include<bits/stdc++.h>
using namespace std;


int main()
{
    int s,s1=0,s2=0,cnt1=0;
    int c[4],d[4];
    for(int i=1; i<=3; i++)
    {
        cin>>c[i];
        s1 += c[i];
    }
    for(int i=1; i<=3; i++)
    {
        cin>>d[i];
         s2 += d[i];
    }
    cin>>s;

      while(s1>=5 || s2>=10){
        cnt1++;
        s1 = s1/5;
        s2 = s2/10;
      }

      if( cnt1 < s)cout<<"YES"<<endl;
        else cout<<"no"<<endl;

    return 0;
}
