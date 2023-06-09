
#include <stdio.h>

int main() {

   int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

   if ((b <= d) || ((c - a) % (d - b))){
        printf("NO\n");

    }
    else printf("YES\n");



  return 0;
}
