#include<stdio.h>


int main(){
  char country1[6]= {'i', 'n', 'd', 'i','a','\0'}; // ekta beshi hobe null char er jonno


 char country2[]= {'i', 'n', 'd', 'i','a','\0'}; // method 2

 // char country[]; error ashbe

 char country3[]="india";  // method 3

 char *country4 = "india";



  char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', ' ', // porata print korbe kintu last a null na thakay gurbage value dekhabe
  'i', 's', ' ', 'm', 'y', ' ', 'c', 'o', 'u', 'n', 't', 'r', 'y'};

  printf("%s\n", country);


  char country5[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', ' ',   // null pele oikhanei sesh kore dibe
  'i', 's', '\0', 'm', 'y', ' ', 'c', 'o', 'u', 'n', 't', 'r', 'y'};

  printf("%s\n", country5);





}
