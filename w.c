#include <stdio.h>
 int main(){
int m, n,T,i,ans;
scanf("%d",&T); //kotobar input nite chai oita

for(i=1;i<=T;i++) // T er man joto nibo totobar for loop chalabo jodi 3 nei tahole 3 bar cholbe loop

    {

    scanf("%d %d",&m,&n); //m hocche row songkha r n hocche column sokkha input hisebe nilam

    if(m%2==0 && n%2==0) // jodi m,n er man gula jor hoy mane 2 diya vhaag korar por vhaghsesh 0 hoy tahole if kaj korbe
    {
        ans = (m*n)/2; // m=8,n=8 hole output a ans hobe 8*8/2 = 32 ..
    }
    else if (m%2 != 0 && n%2 != 0)// mane m,n er man jodi jor na hoy bejor hoy tahole else if kaj korbe
    {
        ans = ((m*n)+1)/2;
    }

    printf("CASE %d: %d\n\n",i,ans);
}

return 0;
}
