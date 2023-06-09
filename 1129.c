#include <stdio.h>
int main()
{
    double a,sum=1.0;
    int n;
    char c;
      scanf("%d",&n);


for(int i=0;i<n;i++){

 scanf("%lf %c",&a,&c);

 if(c == '*'){
        sum = sum*a;
       }

      else sum = sum/a;
 }
 printf("%.0lf\n",sum);

    return 0;
}
