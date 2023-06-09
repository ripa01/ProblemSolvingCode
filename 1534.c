#include<stdio.h>
int main()
{

int i,j,N,arr[70][70];

    while(scanf("%d",&N)!=EOF){



        for(i = 0;i < N;i++){

            for(j = 0;j < N;j++){

                if(i==j){arr[i][j]=1;}

                  else{arr[i][j]=3;}

                  if(i+j == n-1){arr[i][j]=2;}

            }
        }
        for(i = 0;i < N;i++){
            for(j = 0;j < N;j++){

                printf("%d",arr[i][j]);

            }
            printf("\n");
        }
    }
    return 0;
}

