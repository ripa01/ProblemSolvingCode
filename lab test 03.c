#include<stdio.h>

int main(){

 char st[200];

 int i,count=0;

 gets(st);

 for(i=0; st[i] != '\0' ; i++){

    if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U')
        count++;
 }

    printf("%d\n",count);

    return 0;

}
