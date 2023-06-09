#include <stdio.h>
int main()
{  char a[4], b[2],c[2],d[2],e[2],f[4];
    int i,j,k,l,p,q,r,s,D,H,M,S,ANS,ANSD,ANSH,ANSM,ANSS;

    scanf("%s%d", a,&i);
    scanf("%d%s%d%s%d", &j,&b,&k,&c,&l);
    scanf("%s%d", &f,&p);
    scanf("%d%s%d%s%d", &q, &d,&r,&e,&s);


   D = p - i;
   H = q - j;
   M = r - k ;
   S = s - l;
   ANS = (D*86400+H*3600+M*60+S);

    ANSD=ANS/86400;
    ANS=ANS%86400;
    printf("%d dia(s)\n",ANSD);
    ANSH=ANS/3600;
    ANS=ANS%3600;
    printf("%d hora(s)\n",ANSH);
    ANSM=ANS/60;
    ANS=ANS%60;
    printf("%d minuto(s)\n",ANSM);
    ANSS=ANS;
    printf("%d segundo(s)\n",ANSS);


    return 0;
}
