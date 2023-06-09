
#include <stdio.h>
int main()
{
   int count=0,i,j,p;

   int arr1[1000],arr2[1000],n,m;

  scanf("%d %d",&n,&m);

for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
}
for(j=0;j<m;j++){

    scanf("%d",&arr2[j]);
   }

   for(i=0;i<n;i++){

   for(j=0;j<m;j++){

  if(arr1[i] != arr2[j]){

  printf("%d distint\n",arr1[i]);
     break;
} else{ break;}

   }

}


}
