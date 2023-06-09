#include<stdio.h>

int main(){

int X,Y,i,temp=0;

 scanf("%d\n%d",&X,&Y);

 if(X>Y){temp=Y;Y=X;X=temp;}


for(i=X+1;i < Y;i++)
    {
   if(i%5 == 2 || i%5 == 3){
    printf("%d\n",i);
}

}


  return 0;
}
