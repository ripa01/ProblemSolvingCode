//2017 uap que first 2 pic

/*#include<stdio.h> //2a

int main(){

int i,j,n=10,k;


for(i=1;i<=n;i++){

    if(i==3){continue;}

    if(i==6){break;}

    printf("%d",i);


printf("\n");
}


}

*/
/*
#include<stdio.h> //1a
#include<string.h>


char str[150]= "ABC";

int main(){

strcpy(str, "TEXT1");
strcat(str, "\nTEXT2");

printf("%s",str);

return 0;

}
*/


/*#include <stdio.h>  //1b
#include <string.h>

int main(){
    char string1[20];
    int i, length;
    int count = 0;

    printf("Enter a string:");
    scanf("%s", string1);

    length = strlen(string1);

    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            count = 1;
            break;
   }
}

    if (count==1) {
        printf("%s is not a palindrome", string1);
    }
    else {
        printf("%s is a palindrome", string1);
    }
    return 0;
}
*/


/*#include <stdio.h> //2b
int main() {

  int i, n;

  // initialize first and second terms
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;

  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // print the first two terms t1 and t2
  printf("Fibonacci Series: %d %d ", t1, t2);

  // print 3rd to nth terms
  for (i = 3; i <= n; ++i) {
    printf("%d ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}

*/

/*
#include<stdio.h> //3b
#include<string.h>

struct student
{

char name[50];

int roll[30];
float marks[30];

}s;

int main(){
      int i;



   for(i=1;i<3;i++){

        printf("\n 0%d. Enter student Name: ",i);
		fflush(stdin);
		gets(s.name);
        printf("\n Enter student Roll:");
        fflush(stdin);
		gets(s.roll);
        printf("\nEnter student Marks:");
        fflush(stdin);
		gets(s.marks);

    printf("\nStudent Name: ");
    puts(s.name);
    printf("\nStudent Roll: ");
    puts(s.roll);
    printf("\nStudent Marks: ");
    puts(s.marks);


   }


 */

/*
#include<stdio.h> //4b

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

*/


/*#include<stdio.h>//4a


int main(){

 FILE *f;
 char name[30];
 int marks;
 int n,i;

f = fopen("uap.txt","a");

 if(f== NULL){

    printf("File does not exits...\n");

 }

else {

      printf("HOW MANY STUDENTS : ");
      scanf("%d",&n);

      for(i=0;i<n;i++){

        printf("ENTER NAME:");
        scanf("%s",&name);


       printf("ENTER MARKS:");
       scanf("%d",&marks);

       fprintf(f,"NAME:%s\t\tROLL:%d\n",name,marks);

      }

fclose(f);



getch();


}
}

*/


/*
#include<stdio.h> //4c
#include<string.h>

void call(int *b, int *a, int *t){

 *t = *b;
 *b = *a;
 *a = *t;



}
int main(){

int b= -90, a= 12, t=90;
call(&a,&b,&t);
printf("%d %d %d", a,b,t);

return 0;

}


*/

























