#include<stdio.h>

int binary_search(int arr[], int key, int lb, int ub){

    int mid;
    if (lb < ub)
        mid = (ub + lb) / 2;
    else
        return 0;

    if (arr[mid] < key)
        binary_search(arr, key, mid + 1, ub);

    else if(arr[mid] > key)
        binary_search(arr, key, lb, mid);

        else
            return mid;

}

int main()
{
    int d, i, size;
    printf("Enter size of the array : ");
    scanf("%d", &size);

    int ar[size];
    printf("Enter array elements : ");
    for (i = 0; i < size; i++)
         scanf("%d", &ar[i]);

    printf("\nArray elements are : ");
    for (i = 0; i < size; i++)
        printf("%d ", ar[i]);

    printf("\nEnter searching element : ");
    scanf("%d", &d);

    if (binary_search(ar, d, 0, size - 1) != 0)
    printf("%d is found at %d position.", d, binary_search(ar, d, 0, size - 1));
    else
    printf("Not found.");
}

