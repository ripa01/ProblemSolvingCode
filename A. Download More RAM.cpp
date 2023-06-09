#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> v;
    map<int, int> m;
    for(int i = 0; i<n; i++){
      int a;
      cin>>a;
      v.push_back(a);
    }
   sort(v.begin(), v.end());

  for(int i=0;i<v.size();i++){
      m[v[i]]++;

  }
  cout<<m[v[0]]*m[v[n-1]]*2<<endl;
  }
  return 0;

}

