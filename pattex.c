#include<stdio.h>

int main(){
int i,j,n=1;

for(i=1;i<=4;i++){
        //space
  for (j=1;j<=4-i ; j++){
    printf(" ");
  }
    //character
    for(j=1;j<=i;j++){

        printf("%d",n);
n++;
    }

    printf("\n");

}
}