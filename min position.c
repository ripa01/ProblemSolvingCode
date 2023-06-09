
#include <stdio.h>
int main()
{
   int pos,i;
   float a[10]={3.0,5.5,2.0,6.1,7.0,8.0,9.0,2.0,1.0,4.0},min;



  min = a[0];
   pos = 0;

for(i=1;i<10;i++){


  if(a[i]<min){

    min = a[i];
    pos = i;
}
}

  printf("The minimum is=%.1f and it appeared in location=%d\n",min,pos);




}
