#include<bits/stdc++.h>
using namespace std;
vector<int> bfsGraph(int v, vector<int> adj[]){
queue<int>q;
 vector<int> bfs;
  int vis[v+1] = {0};
 cout<<"enter the source: " <<endl;
 int x; cin>>x;
 q.push(x);
 vis[x]= 1;
 while(!q.empty()){
    int u = q.front();
    q.pop();
    bfs.push_back(u);
    for(int i =0; i< adj[u].size();i++){
        if(vis[adj[u][i]]==0){
            vis[adj[u][i]]=1;
            q.push(adj[u][i]);
        }}}
return bfs;
}
int main(){
int v,e;
cin>>v>>e;
vector<int> adj[v+1],bfs;
for(int i=0;i<e;i++){
    int l,r;
    cin>>l>>r;
    adj[l].push_back(r);
    adj[r].push_back(l);
}
bfs = bfsGraph(v,adj);
  for(auto &x : bfs){
        cout << x << " ";
    }cout << endl;
    return 0;
}


