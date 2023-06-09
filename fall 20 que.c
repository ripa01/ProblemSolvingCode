/*#include <stdio.h> //3b
int main()
{
  int m, n, c, d, matrix[100][100], maximum,count = 0;

  printf("Enter the number of rows and columns of matrix\n");
  scanf("%d%d",&m,&n);

  printf("Enter the elements of the matrix\n");

  for (c = 0; c < m; c++)
    for(d = 0; d < n; d++)
      scanf("%d", &matrix[c][d]);


  maximum = matrix[0][0];

  for (c = 0; c < m; c++){
    for (d = 0; d < n; d++){

      if (matrix[c][d] > maximum){
         maximum = matrix[c][d];

         if(matrix[c][d] == maximum ){
            count= count+1;
      }
}
    }
  }
  printf("Global Maximum appears %d times\n", count);

  return 0;
}

*/

/*
#include <stdio.h> //2b
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int size, i;



    scanf("%d", &size);


    printf("Input array element: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nReverse array: ");
    for(i = size-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

*/

/*#include <stdio.h>//2c

void engima(int n){
   if(n==0)return;

   else{
    engima(n/2);
    printf("%d",n%2);
   }



}
void main()
{
   engima(11);

}
*/
/*
#include <stdio.h> //1a
#include <string.h>

int main() {

 char str[100];
 char n;
 int count=0;


 printf("ENTER A STRING: ");
 gets(str);

 for(int i = 0; i <strlen(str); i++) {

     count = 0;

     for(int j = 0; j <strlen(str); j++) {

      if((str[i] == str[j])) {
             count++;

        }
     }

    if (count == 1) {
         n = str[i];
          break;
      }

 }

  printf("First non-repeating character is %c",n);
    return 0;
}
*/


/*
#include<stdio.h>//2a
int main(){

{


	int j,i,n;

		scanf("%d",&n);

 if(n <= 26)

    {
        for(i=1; i<=n; i++){

      for(j=1 ; j <= i; j++){

      printf("%c", 'A' + j-1 );

      }

       printf("\n");
   }

 }


  return 0;
}
}

*/








