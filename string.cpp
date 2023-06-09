#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    cin>>r;
    while(r--){

    int a,cnt=0,i;
   cin>>a;
   string l;
   cin>>l;

    for(i=0; i<a; i++)
    {
       int p = l[i] - 96;
       cnt = max(cnt,p);
    }


   cout<<cnt<<endl;

}
return 0;
}
