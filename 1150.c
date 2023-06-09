#include <stdio.h>
int main()
{
    int  x, Y, a, sum=0,count=0;
          scanf("%d", &x);
          scanf("%d",&a);
     while(x >= a){

   scanf("%d",&a);
     }

  while(x<a && sum<a){
        sum= sum+x;
            count++;
     x++;
     }
       printf("%d\n",count);

    return 0;
}
