#include <stdio.h>

int main() {
 float N1,N2,N3,N4,e;
 double M,p;
 scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
 M = ((N1*2)+(N2*3)+(N3*4)+N4)/10;
 printf("Media: %.1lf\n",M);
 if(M >= 7.0)printf("Aluno aprovado.\n");
 else if(M < 5.0)printf("Aluno reprovado.\n");
 else {
    printf("Aluno em exame.\n");
scanf("%f",e);
    printf("Nota do exame: %.1lf\n",e);
    p = (M+e)/2;
    if(p >= 5.0)printf("Aluno aprovado.\n");
    else printf("Aluno reprovado.\n");
    printf("Media final: %.1lf\n",p);
 }

    return 0;
}
