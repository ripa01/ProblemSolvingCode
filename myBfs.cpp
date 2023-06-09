#include<bits/stdc++.h>
using namespace std;

vector<int> bfsGraph(int v, vector<int>arr[]){

 queue<int> q;
  vector<int> bfs;
  int vis[v+1] = {0};
 cout<< "enter source"<<endl;

 int x;
 cin>>x;
  q.push(x);
  vis[x]=1;
  while(!q.empty()){
    int u = q.front();
    q.pop();
  bfs.push_back(u);
  for(int i =0;i< arr[u].size();i++){
    if(vis[arr[u][i]]==0){
        vis[arr[u][i]]= 1;
        q.push(arr[u][i]);
    }

  }




  }
  return bfs;


}

int main(){
 int v,e;
 cin>>v>>e;
 vector<int>arr[v+1],bfs;
 for(int i=0;i<e;i++){
    int l,r;
    cin>>l>>r;
    arr[l].push_back(l);
    arr[r].push_back(r);


 }

 bfs = bfsGraph(v,arr);
 for(auto &x : bfs){
        cout << x << " ";
    }cout << endl;
    return 0;



}
