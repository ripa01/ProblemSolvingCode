#include<bits/stdc++.h>
using namespace std;

int knapsack(int n,int cpt,int wt[],int val[]){
    int dp[n+1][cpt+1];



    for(int i=0;i<= n;i++){
     for(int j=0;j<=cpt;j++){
        if(i==0 || j==0){
            dp[i][j]=0;
        }
        else if(wt[i-1]<=j){
                dp[i][j]= max(dp[i-1][j],(val[i-1]+dp[i-1][j- wt[i-1]]));
}
        else dp[i][j]= dp[i-1][j];

        cout<<dp[i][j]<<" ";
     }
     cout<< endl;
    }


cout << "max value:"<<dp[n][cpt]<<endl;


}

int main(){
    int wt[]={2,3,4,5};
    int val[]={3,4,5,6};

    int n = sizeof(val)/sizeof(val[0]);

    int cpt = 5;

   knapsack(n,cpt,wt,val);




}
