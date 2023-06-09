#include <stdio.h>
int main()
{
   int count=0,i;
   int a[10]={10,10,10,8,7,6,4,4,3,3};

for(i=0;i<10;i++){


  if(a[i] == a[i+1]){


    count++;
}
}

  printf("There are %d duplicate elements\n",count);




}

