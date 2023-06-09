#include <stdio.h>
int main() {
    int n,num,i;

    scanf("%d",&n);


    for(i=1;i<=n;i++){
   scanf("%d", &num);

   if (num %2 == 0)
            printf("%d is even\n",num);
    else
        printf("%d is odd\n",num);

}

    return 0;
}
