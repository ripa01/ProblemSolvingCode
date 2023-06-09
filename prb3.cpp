#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  stack<int> s;
  while(t--){
      int x;
      cin>>x;
      if(x == 1){
          cin>>x;
          s.push(x);//15 20
      }
      else if(x == 2){
          if(!s.empty())
            s.pop();//15 thn after pop stack will empty
      }
      else{
          if(s.empty()) cout<<"Empty!"<<endl;
          else cout<<s.top()<<endl;// print 15
      }
  }
  return 0;
}
