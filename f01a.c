#include <stdio.h>
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
