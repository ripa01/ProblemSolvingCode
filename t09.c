#include <stdio.h>
#include <string.h>

int main()
{
   int n,m,i,p,temp;
   char s[100],o[100];

    scanf("%d",&n);

    for (i=1; i<=n; i++){
      temp=0;
        scanf("%d",&m);
           for (int j=1; j<=m; j++){

            scanf("%s %d",&s,&p);

            if(temp<p){
                   temp=p;
                   strcpy(o,s);

            }
           }
           if(1600<= temp && 1899>=temp){
            printf("Case %d: %s is Expert!.",i,o);
           }
          else if(1400<= temp && 1599>=temp){
            printf("Case %d: %s is Specialist!.",i,o);
           }
           else if(1200<= temp && 1399>=temp){
            printf("Case %d: %s is Pupil!.",i,o);
           }
           else if(1<= temp && 1199>=temp){
            printf("Case %d: %s is Newbie!.",i,o);
           }


    }
    return 0;
}
