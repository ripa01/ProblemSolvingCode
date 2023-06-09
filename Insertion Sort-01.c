#include<stdio.h>
int main(){

   int i, j, count, temp, number[25];

   printf("How many numbers you want to enter: ");
   scanf("%d",&count);
   printf("Enter %d elements: ",count);

    for(i=0;i<count;i++)
      scanf("%d",&number[i]);

    printf("\n\nArray Elements Before Sorting: ");
    for (i = 0; i < count; i++)
    {
        printf("%d ", number[i]);
    }

    for(i=1;i<count;i++){
      temp=number[i];
      j=i-1;
      while((temp<number[j])&&(j>=0)){
         number[j+1]=number[j];
         j=j-1;
      }
      number[j+1]=temp;
   }

   printf("\n\nArray Elements After Sorting in Ascending Order: ");

    for(i=0;i<count;i++){
        printf(" %d",number[i]);
      }

   printf("\n\n");
   return 0;
}
