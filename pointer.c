/*#include<stdio.h> // pointer

int main(){

    int a=50,b=0,*p,*q;

p =&a;
q=&b;
printf("%d %d\n\n\n",p,q);


printf("%d %d\n",*p,*q);

b = a+ *q;

printf("%d\n",b);

p = q;

printf("%d\n",p);

a= (*p)*(*q);

printf("%d\n",a);

*q = a/b;

printf("%d\n",*q);

*p = a%b;

printf("%d\n",*p);


}

*/


/*#include <windows.h> //string word print
main()
{
char s[80];
int n,length,i;
printf("Enter a Sentence:");
gets(s);
length = strlen(s);
for(i = 0; i < length; i++)
{
printf("  %c\n",s[i]);
Sleep(500);
}
}
*/

/*
   //palindrome
main(){
char s[80],t[80];
int length, i, j;
gets(s);
length = strlen(s);
j = 0;
for(i = length-1; i >= 0; i--){
t[j] = s[i];
j++;
}
for(i = 0; i < length; i++){
if(s[i] != t[i]){
break;
}
}
if(i == length)
printf("Palindrome");
else
printf("No");
}

*/

/*

#include <stdio.h> //reverse string
#include <string.h>
int main( )
 {
char str[20];
printf("ENTER A STRING: ");
gets(str);
strrev(str);
printf("%s",str);
return 0;
}

*/

/*
#include <stdio.h> //maximum value of an array
#include <stdlib.h>

int main()
{

int i,n;
int a[100];

printf("enter no of element: ");
scanf("%d\n",&n);

 for(i= 0; i<n; i++){
   scanf("%d",&a[i]);
}
// Find The Maximum Element
int max=a[0]; // pick the first number as the current maximum

int min = a[0];
int p=0,q=0;
for(i=1; i< n; i++)
{
if(max < a[i])
{
max=a[i];
p = i;
}
else if(min > a[i]){

    min = a[i];
    q = i
}
}
printf("The maximum value in the array is %d and It is located at index %d\n The minimum value in the array is %d and It is located at index %d \n\n", max,p,min,q);
}

*/




















