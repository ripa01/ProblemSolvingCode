#include <stdio.h>
int main() {
    int age,s=0,c=0;
    while(1)
    {
        scanf("%d",&age);
        if(age<0)
            break;
        else
        {
            s += age;
            c++;
        }
    }
    printf("%.2f\n",(float)s/(float)c);
    return 0;
}
