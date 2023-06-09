#include <stdio.h>

int main(){

    int arr[50], num=8, x, y, temp;

    printf("Please Enter your UAP id as sequential digits: ");

    for(x = 0; x < num; x++)

        scanf("%d", &arr[x]);

    for(x = 0; x < num; x++){

        for(y = x+1; y < num ; y++){

            if(arr[x] > arr[y]){

                temp = arr[x];

                arr[x] = arr[y];

                arr[y] = temp;

            }

        }

    }

    printf("\n\nArray after implementing ascending order bubble sort: ");

    for(x = 0; x < num; x++){

        printf("%d  ", arr[x]);

    }

    printf("\n\nArray after implementing descending order bubble sort: ");

    for(x = num-1; x >= 0; x--){

        printf("%d  ", arr[x]);

    }

    return 0;

}
