#include <stdio.h>

int main()
{

    char name[1000];
    int n;
    scanf("%d",&n );

 for(int i =0;i<n;i++){

    scanf("%s", &name);

    if(strlen(name)>10)
		{
            printf("%c%d%c\n",name[0],strlen(name)-2,name[strlen(name)-1]);

		} else  printf("%s\n",name);

  }

	return 0;
}
