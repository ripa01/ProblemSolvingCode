#include<bits/stdc++.h>
using namespace std;

int knapSack(int W, int n, int val[], int wt[]);

int main() {
  int wt[] = {2,3,4,5};
  int val[] = {3,4,5,6};
  int n = 4;
  int W = 5;
  cout<< knapSack(W, n, val, wt)<<endl;
return 0;
}


int knapSack(int W, int n, int val[], int wt[]) {
  int i, w;
int V[n+1][W+1];
for(w = 0; w <= W; w++) {
    V[0][w] = 0;
  }
 for(i = 0; i <= n; i++) {
    V[i][0] = 0;
  }
  for(i = 1; i <= n; i++) {
    for(w = 1; w <= W; w++) {
      if(wt[i-1] <= w) {
        V[i][w] = max(V[i-1][w], val[i-1] + V[i-1][w - wt[i-1]]);
      } else {
        V[i][w] = V[i-1][w];
      }
    }
  }
 return  V[n][W];
}
