
#include <stdio.h>

int main() {

    int n,p,q;
    scanf("%d",&n);
    for(int i =0;i<n;i++){

        scanf("%d",&p);
     for(int i =0;i<p;i++){

        scanf("%d",&q);
        if(q==1) printf("Rolien\n");
        else if(q==2) printf("Naej\n");
        else if(q==3) printf("Elehcim\n");
        else printf("Odranoel\n");

   }
    }

    return 0;
}
