#include <bits/stdc++.h>
using namespace std;

int main(){
  int t,n,m;
  cin>>n;
  vector<int> v;
  for(int i =0;i<n;i++){
      int x;
      cin>>x;
      v.push_back(x);

  }
  vector<int> v1;
  for(int i =0;i<v.size();i++){
     for(int j =1;j<v.size();j++){
        m = abs(v[i]-v[j]);
        v1.push_back(m);

  }
   sort(v1.begin(),v1.end());

  }
  cout<<v1.front()<<" "<<v1.back()<<endl;
  return 0;
}
