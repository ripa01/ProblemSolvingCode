#include <stdio.h>
#include <string.h>

int main()
{

    char name[100];
    scanf("%s", &name);
    int count = 0;
    for (int i = 0; i < strlen(name)-1; i++)
    {
        for (int j = i + 1; j < strlen(name); j++)
        {
            if (name[i] == name[j])
            {
                count++;
                break;
            }
        }
    }

    int result = strlen(name) - count;
    printf("%d\n",result);

    if (result % 2 == 0)
		{
			 printf("CHAT WITH HER!\n");
		}
		else
		{

		    printf("IGNORE HIM!\n");

		}

	return 0;
}
