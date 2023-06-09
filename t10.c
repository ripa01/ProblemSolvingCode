#include<stdio.h>
int main() {

int a,b,n,p[100],sum=0;

scanf("%d %d %d",&n,&a,&b);

for (int o=0;o<n;o++){
    scanf("%d",&p[o]);

    if(o>=a && o<=b ){
        sum += p[o];
    }
}

printf("%d\n",sum);

return 0;
}
