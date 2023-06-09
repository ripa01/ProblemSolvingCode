#include <stdio.h>
int main()
{
    float a,b,c,peri;
    scanf("%f" ,&a);

    if(0 < a  && a<=400.00){
         peri=a+ (a*15/100);
         printf("Novo salario: %.2f\n",peri);
          printf("Reajuste ganho: %.2f\n",(peri-a));
           printf("Em percentual: 15%%");
    }
   else if(400.00 < a && a<=800.00){
         peri= a+(a*12/100);
         printf("Novo salario: %.2f\n",peri);
          printf("Reajuste ganho: %.2f\n",(peri-a));
           printf("Em percentual: 12%%");
    }
    else if(800.00 <a && a<=1200.00){
         peri= a+(a*10/100);
         printf("Novo salario: %.2f\n",peri);
          printf("Reajuste ganho: %.2f\n",(peri-a));
           printf("Em percentual: 10%%");
    }
    else if(1200.00 < a && a<=2000.00){
         peri= a+ (a*7/100);
         printf("Novo salario: %.2f\n",peri);
          printf("Reajuste ganho: %.2f\n",(peri-a));
           printf("Em percentual: 7%%");
    }
    else {
         peri= a+(a*4/100);
         printf("Novo salario: %.2f\n",peri);
          printf("Reajuste ganho: %.2f\n",(peri-a));
           printf("Em percentual: 4%%");
    }

    return 0;
}
