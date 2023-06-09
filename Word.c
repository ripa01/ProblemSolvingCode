#include <stdio.h>
#include <ctype.h>

int main()
{

    char name[1000];
    scanf("%s", &name);
   int c=0,d=0;


 for (int j = 0; j < strlen(name); j++){
			if((name[j]>='a' && name[j]<='z'))
                c++;
               else d++;
		}

		if(c>=d){
              printf ("%s", strlwr(name));

		}
		else  printf ("%s", strupr(name));


	return 0;
}


