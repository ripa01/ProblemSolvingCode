/*
#include<stdio.h> \\1A

int adder(int n){

int i,add=0;

for(i=1;i<=n;i++){

  add += i;

}
 return(add);


}

int main(){
  int n,s;
  scanf("%d",&n);
  s = adder(n);
  printf("%d",s);
}
*/

/*#include<stdio.h> // output


int main(){

int *a,**b,x=10,y=20;
a=&x;
b=&a;
printf("%d\n",a);
printf("%d\n",*a);
*a++;
*a++;
printf("%d\n",a);
printf("%d\n",*a);
a=&y;
(*a)++;
printf("%d\n",a);
printf("%d\n",*a);
a=&x;
**b=20;
printf("%d\n",x);
a=&y;
printf("%d\n",a);
printf("%d\n",*a);

return 0;


}
*/
/*#include<stdio.h> // sum of integer

int main(){

int sum=0,i,j;
for(i=1;i<8;i=i+2){

    for(j=1;j<8;j=j+3){

      sum = sum - (i*j);


    }

}

printf("%d",sum);

return 0;

}
*/


/*#include<stdio.h> // output

int main(){

int a=7,b=6;

printf("%d\n",a&b);

printf("%d\n",a|b);

printf("%d\n",a^b);


}
*/



/*#include<stdio.h>// power 5


int isPowerOffive(int n)
{
   if(n%5==0)
       return 1;

     else return 0;

}

int main()
{
    int n,p;
    scanf("%d",&n);
    p = isPowerOffive(n);
     printf("%d",p);
}
*/





















