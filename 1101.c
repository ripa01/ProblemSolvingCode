#include <stdio.h>
int main() {
    while(1)
    {
        int M,N,i,sum=0;
        scanf("%d%d",&M,&N);
        if(M<= 0 || N <= 0)
            break;
        if(M>N)
        {
            int t = N;
                N = M;
                M = t;
        }
        for(i=M; i<=N; i++)
        {
            printf("%d ",i);
            sum += i;
        }
        printf("Sum=%d\n",sum);
    }
    return 0;
}
