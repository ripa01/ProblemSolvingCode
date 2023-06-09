#include <stdio.h>
#include <math.h>
int main() {
  long long int n,a,b,c,sum=0;

  scanf("%d",&n);

for (int i = 1; i <= n; i++) {

    scanf("%d %d %d",&a,&b,&c);



        sum = pow(a,b);
       printf("%d\n",sum%c);

}


}
