#include <stdio.h>

int main() {

    int a,b,c,d,e,f;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
        int good= a+b+c;
        int bad= d+e;

       if(good > bad){
        printf("Middle-earth is safe.\n");
       }
       else if (good<= bad){

        good = good+f;
        if(good>bad){
            printf("Middle-earth is safe.\n");
        } else printf("Sauron has returned.\n");

       }


    return 0;
}

