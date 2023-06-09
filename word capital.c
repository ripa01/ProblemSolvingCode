#include <stdio.h>

int main()
{

    char name[1000];
    scanf("%s", &name);
    char ch;


 for (int j = 0; j < strlen(name); j++)
        {
            if(j==0)
		{
			if((name[j]>='a' && name[j]<='z'))
              name[j]=name[j]-32;
			continue;
		}

            }
      printf("%s",name);

	return 0;
}
