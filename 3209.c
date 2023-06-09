#include <stdio.h>
int main()
{
    int n, m , i,j,o;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {    int sum=0;
        scanf("%d", &m);

         for(j=0; j<m; j++)
            {
          scanf("%d", &o);
          sum=sum+o;

    }
   printf("%d\n",(sum-(m-1)));
   }

    return 0;
}

