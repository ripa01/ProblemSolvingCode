#include <stdio.h>

int main()
{
    int k,n,a;
    scanf("%d %d",&n,&k);
   int count=0,temp[1000];

 for(int i=1;i<=n;i++){

    scanf("%d",&a);
        temp[i]=a;

 }

for(int j=1;j<=n;j++){

    if(temp[k] <= temp[j] && temp[j] > 0){
        count++;
    }
 }
 printf("%d",count);

	return 0;
}

