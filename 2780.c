#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

        if(n<=800) printf("1\n");
        else if(800<n && n<=1400) printf("2\n");
        if(1400<n && n<= 2000) printf("3\n");

    return 0;
}

