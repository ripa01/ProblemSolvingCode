#include <stdio.h>
int main()
{
    float a,b,c,peri;
    scanf("%f %f %f" ,&a,&b,&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
          peri = a+b+c;
         printf("Perimetro = %.1f",peri);

    }
    else {
       peri = (a+b)/2;
        printf("Area = %.1f",peri);
    }


    return 0;
}
