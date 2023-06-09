#include<stdio.h>
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
