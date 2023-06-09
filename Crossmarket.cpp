#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,ans=0;

  cin>>n;
  while(n--){
        int a,b;
    cin>>a>>b;
  if(a==1 && b==1){
    cout<<0<<endl;
    continue;
  }
    if(a>b){
        swap(a,b);

    }



  ans = (a*2)+b-2;
  cout<<ans<<endl;



  }




}
