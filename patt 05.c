
#include <stdio.h>

int main()
{
    int N, i, j;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Print first part
        for(j=i; j<=(N-1); j++)
        {
            printf("%d",j);
        }

        // Print second part
        for(j=1; j<=i; j++)
        {
            printf("%d",N);
        }

        printf("\n");
    }

    return 0;
}

