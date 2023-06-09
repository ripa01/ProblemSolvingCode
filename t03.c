
#include <stdio.h>

int main()
{
    int num;

    scanf("%d",&num);

    int count=0;

    for(int i=1;i<=num;i++)
    {
        count += i;

    }
      printf("%d\n",count);


    return 0;
}
