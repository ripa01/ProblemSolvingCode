#include<bits/stdc++.h>
using namespace std;
int cSum(int arr[],int low,int mid,int high){
       int sum =0,i;
       int lsum = INT_MIN;
       int rsum = INT_MIN;
       for(i=mid;i>=low;i--){
          sum += arr[i];
          if(sum>lsum){
            lsum = sum;
          }}
        sum =0;
       for(i=mid+1;i<=high;i++){
          sum += arr[i];
          if(sum>rsum){
            rsum = sum;
          }}return lsum+rsum;
}
int mss(int arr[],int low,int high){
       if(low==high){
        return arr[low];
       }
int mid = (high+low)/2;
int lsum = mss(arr,low,mid);
int rsum = mss(arr,mid+1,high);
int crossSum = cSum(arr,low,mid,high);
return max(max(lsum,rsum),crossSum);

}
int main(){
  int arr[] = {-3,-5,6,-2,-3,1,5,-6};
    int n = 8;
 int result = mss(arr,0,n-1);
 cout<< result <<endl;
}
