#include<stdio.h>

int main(){
   double N[12][12], sum=0.0;
   int i,j,c;

   char x[2];
   scanf("%d %s",&c,&x);
   for (i=0; i<12; i++){
    for(j=0; j<12; j++){

        scanf("%lf", &N[i][j]);
    }
   }

    for(j=0 ; j<12; j++){
        sum += N[j][c];
     if(x[0]=='S') printf("%.1lf\n",sum);

    else if(x[0]=='M') printf("%.1lf\n",sum/12.0);
    }

}

