#include<bits/stdc++.h>
using namespace std;


int CrossSum(int arr[],int low,int mid, int high)
{
    int sum=0, i;
    int Lsum = INT_MIN;
    int Rsum = INT_MIN;

    for (i=mid;i>=low;i--)
    {
        sum+=arr[i];
        if (sum>Lsum)
            Lsum=sum;
    }
    sum=0;
    for (i=mid+1; i<=high;i++)
    {
        sum+=arr[i];
        if(sum>Rsum)
            Rsum=sum;
    }

    return Rsum+Lsum;
}

int mss(int arr[], int low, int high)
{
    if (low==high)
        return arr[low];

    int mid = (low+high)/2;
    int lsum = mss(arr, low, mid);
    int rsum = mss(arr,mid+1,high);

    int crossum = CrossSum(arr,low,mid,high);

    return max(max(lsum,rsum),crossum);


}

int main()
{
    int arr[] = {-3,-5,6,-2,-3,1,5,-6};
    int n = 8;
    int result = mss(arr,0,n-1);
    printf("Maximum SubArray Sum is : %d", result);
    return 0;
}
