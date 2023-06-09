
#include <stdio.h>

int main()
{
    int v1[5] = { 1, 3, 7, 13, 10 };
    int v2[2] = { 1, 10 };

    for (int i = 0; i < sizeof(v1) / (sizeof * v1); i++) {
        for (int j = 0; j < sizeof(v2) / (sizeof * v2); j++) {
            if (v1[i] != v2[j]) {
                printf("%d ", v1[i]);
                break;
            } else {
                break;
            }
        }
    }

    return 0;
}
