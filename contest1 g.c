#include <stdio.h>

int main() {
  int n,s,m;
  scanf("%d %d",&n,&m);
s = ((n%2)+(n/2))*((m/2)+(m%2));
if(n <= 2 && m <=2){
            printf("1\n");
  }

  else printf("%d\n",s);
  return 0;
}
