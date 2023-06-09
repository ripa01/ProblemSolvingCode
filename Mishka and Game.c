#include <stdio.h>


int main() {
    int n,m,a,c=0,d=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&m,&a);
        if(m>a){
            c++;
        }
        else if(m<a){
            d++;
        }
    }
    if(c>d){
        printf("Mishka\n");
    }
    else if(d>c){printf("Chris\n");
    }
    else printf("Friendship is magic!^^\n");


    return 0;
}
