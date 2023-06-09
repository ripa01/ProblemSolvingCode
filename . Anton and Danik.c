#include <stdio.h>

int main()
{

    char p[1000];
    int c=0,d=0,n;
    scanf("%d",&n);

 for (int j = 0; j < n; j++){
         scanf("%c", &p[j]);

        if(p[j] == 'A'){
            c++;
        }

        else if(p[j]=='D')
            d++;
		}
        printf("%d\n",c);
        printf("%d\n",d);
		if(c > d){
              printf("Anton\n");

		}
		else if(d > c){printf("Danik\n");}


		else if(c==d)printf("Friendship\n");



	return 0;
}
