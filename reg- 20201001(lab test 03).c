#include<stdio.h>

int main(){

 char str[200];
 int i,count=0;
 gets(str);

  char sv[11] = {'a','A','e','E','i','I','o','O', 'U','u','\0'};

 for(i=0; str[i] != '\0' ; i++){

      if(str[i] == sv[11])
        count++;
 }

    printf("%d\n",count);

    return 0;


}
