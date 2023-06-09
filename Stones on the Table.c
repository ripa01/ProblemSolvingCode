#include <stdio.h>

int main()
{

    int n;
    char ch[10000];
    scanf("%d %s", &n,&ch);
    int count = 0;

 for(int i=0;i<n;i++){

       if(ch[i]==ch[i+1]){
        count++;
       }
 }
       printf("%d",count);

	return 0;
}

