/*#include <stdio.h> //cse 115 2a


int main()
{
	char c[100];
	scanf("%s",c);

	int l = strlen(c)-1;
	printf("%s starts with the letter %c and end with the letter %c",c,c[0],c[l]);
	return 0;
}
*/


/*
#include<stdio.h> //password 2b
#include<string.h>
#define N 20

int main()
{
  char pass[N];
  int i, x=0, p;
  printf("Enter a password: ");
  scanf("%s", &pass);
  if(strlen(pass)>=7)
  {
     p=strlen(pass);
     for (i = 0; i < p; i++)
     {

       if ((pass[i] >= 'a' && pass[i] <= 'z') || (pass[i] >= 'A' && pass[i] <= 'Z')  || pass[i] >= ' ')
         printf("");


     }
   printf("\n THE PASSWORD IS STRONG.. ");
  }

   else
   printf("THE PASSWORD IS WEAK...");
    return 0;

}



*/


/*#include <stdio.h> //cse 115 3a


int main()
{

float a = 3.0,
b = -17.0;
float *fp;
fp=&b;
b++;
*fp = *fp - 2.0;
a = *fp;
a++;
printf("a = %d,b = %d",a,b);

}
*/

 /*#include<stdio.h>// cse 115 3b

  int task(int n);
int main ()
  {
      int num,xy;
   printf("Enter a positive integer:\n");
scanf ("%d", &num);
xy=task (num);
printf ( "Result=%d", xy);

  }
  int task(int n)
  {if(n==0)
  return n;
   else
   return n+task(n-1) ;

  }
*/
















