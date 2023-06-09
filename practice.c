#include<stdio.h>

 int main() {
       int n, s=0;

       int p, i=1, x=1;
        scanf("%d", &p);

         while(p--){
          s=0;
    scanf("%d", &n);
     while(n!=0){
            if(n%2 == 1)
                 s++;
            n=n/2;
            }
     if(s%2 == 0)
            printf("Case %d: even\n", i++);
        else printf("Case %d: odd\n", i++);
         }

          return 0;
           }
