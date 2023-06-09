#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int line = n*2 - 1;
    for(int i=0;i<line;i++){

        for(int j=0;j<line;j++){

            int min = i < j ? i : j;
            min = min < line-i ? min : line-i-1;
            min = min < line-j-1 ? min : line-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}
