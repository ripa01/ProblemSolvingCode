#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

 for(int i=0;i<n;i++){
     long long int p,q;
     scanf("%d %d",&p,&q);

     if(p%q==0){
        printf("0\n");
  }
  else{
    printf("%d\n", q-p%q));
 }


}
return 0;
}
