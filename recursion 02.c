#include <stdio.h>

int largest_element(int arr[], int size, int max)
{
    if(size==0) return max;
    if(max<arr[size-1])
    {
        max = arr[size-1];
    }
    return largest_element(arr,size-1,max);
}


int main()
{
    int a[] = {12,1,3,6,5,7,9,2,5,16,79};
    int res = largest_element(a,11,-100000);
    printf("%d\n",res);

    return 0;
}
