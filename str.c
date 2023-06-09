#include<stdio.h>
#include<string.h>


char str[150]= "ABC";

/*void call(int *b, int *a, int *t){

 *t = *b;
 *b = *a;
 *a = *t;



}
*/


int main(){

strcpy(str, "TEXT1");
strcat(str, "\nTEXT2");

printf("%s",str);


/*int b= -90, a= 12, t=90;
call(&a,&b,&t);
printf("%d %d %d", a,b,t);
*/
return 0;

}


/*#include<stdio.h>
int task(int n)
  {
    if(n==0)
        return n;
     else
      return n+task(n-1);//self call to function task()

  }


int main (){
     int num,xy;
   printf("Enter a positive integer:\n");
   scanf("%d",&num);
   xy = task(num);
   printf("Result=%d",xy);

}
*/


#include<stdio.h>

int main(){

int *a,**b,***c,p,q,r;
p=10;
q=18;
r=24;

a= &p;
b = &a;
c = &b;

printf("%d %d %d %d %d %d",p,q,*a,**b,r,***c);

return 0;









}

