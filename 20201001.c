#include<stdio.h>

int main(){
int n,i,j,r;

scanf("%d",&n);
r=((n+1)/2);

if(n%2!=0){

for(i=1;i<=n;i++){


    for(j=1;j<=n;j++){

            if((i == 1 && j == 1) || (i == 1 && j == n))
                {
                printf("1");
            }

        else if((i == n && j == 1) || (i == n && j == n))
            {
                printf("1");
        }

        else if(i==r || j==r)
            {

            printf("1");
        }

         else { printf("0"); }

    }
    printf("\n");
}
}



return 0;
}
