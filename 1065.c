
#include <stdio.h>

int main(){


  int n1,totalNumber = 0;

  for (int i = 1; i <= 5; i++) {
   scanf("%d", &n1);
   if (n1%2 == 0) {
    totalNumber += 1;

   }
  }

 printf("%d valores pares\n", totalNumber);


}
