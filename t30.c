#include <stdio.h>

int main()
{
    int arr[50][50];

    int i = 0;
    int j = 0;

    int n = 0,sum=0;


    scanf("%d",&n);

    for (i = 0; i < n; i++) {


        for (j = 0; j <= i; ++j) {
            if (j == 0 || j == i)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];

        if(i ==(n-1)){

        sum += arr[i][j];
        }


 }

    }
                printf("%d\n",sum);


    return 0;
}
