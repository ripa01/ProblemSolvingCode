#include<stdio.h>
int main()
{
    int a[50], i, key, size, pos = -1;
    printf("Enter array size : ");
    scanf("%d", &size);
    printf("Enter array elements : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array elements are : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nEnter the searching elements : ");
    scanf("%d", &key);
    for (i = 0; i < size; i++)
    {
        if (a[i] == key){
             pos = i;
             break;
        }
    }
    if (pos == -1)
        printf("Element not found.\n");
        else
        printf("%d is found at the %dth position", key, pos + 1);
    return 0;
}
