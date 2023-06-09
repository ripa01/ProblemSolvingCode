#include <stdio.h>

int TOH(int n,char x,char y,char z)
{
int count = 1;
  if (n==1){

  }
else{
    count += TOH(n-1, x, z,y);
             TOH(1, x, y, z);
    count += TOH(n-1, z, y, x);
}
return count;
}

int main()
{
int n, steps;

char A,B,C;

printf("Enter the number of disc : ");

scanf("%d",&n);

steps = TOH(n,'A','C','B');

printf("\nMinimum Number of Steps: %d\n", steps);

return 0;
}
