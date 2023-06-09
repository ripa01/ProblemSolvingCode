#include<bits/stdc++.h>
using namespace std;



int main(){


  int t;
  cin>>t;
  while(t--){
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
      cin>>v[i];
    }

    cout<<v.front()-1<<" ";
    v.back()+1;
    for(int i = 1; i < n-1; i++){
      cout<<v[i]<<" ";
    }
    cout<<v.back()+1<<endl;;
  }

}

