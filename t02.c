//C Program to check whether a number is prime or not
#include <stdio.h>

int main()
{
    int num;

    scanf("%d",&num);

    int count=0;

    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        count++;
    }
    if(count!=0)
    {   for(int j=1;j<=num;j++){
      printf("I DID NOT DO THE ASSIGNMENT.\n");

    }

    }
    else
    {
      printf("NO PUNISHMENT\n");
    }

    return 0;
}
