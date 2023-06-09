#include<stdio.h>

int main()
{

    int c,d,a,b,n;
    int i,s=0;
   scanf("%d",&n);
for(i=0; i<n; i++)
    {
         int rev1=0,rem1,rev2=0,rem2;
        scanf("%d %d",&c,&d);
        a=c;
        b=d;

while(c!=0)
  {
     rem1=c%10;
     rev1=rev1*10+rem1;
     c/=10;
  }
  while(d!=0){

    rem2=d%10;
     rev2=rev2*10+rem2;
     d/=10;
  }


  if(rev1>rev2){
    printf("%d > %d\n",a,b);
  }
  else if(rev1<rev2){
    printf("%d < %d\n",a,b);
  }
  else{
    printf("%d = %d\n",a,b);
  }
    }

    return 0;
}
