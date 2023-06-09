#include<stdio.h>


int main(){

int k,max=10;

for(k=1; k<=max; k++){
    if(k == 3){

        continue;
    }
    if(k==6){
        break;

    }
    printf("k= %d",k);
    printf("\n");

}

printf("all done!");


printf("\n");


}
