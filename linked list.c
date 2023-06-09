#include<stdio.h>;

int main(){


int data[100],address[100],node,newdata,n,j,i,updata;

printf("HOW MANY DATA YOU WANT TO INSERT: \n");
scanf("%d",&n);
printf("PLEASE INPUT ALL THE DATA: \n");

    for(i=0;i<n;i++){
            scanf("%d",&data[i]);
            address[i]=i+1;

    }


     for(i=0;i<n;i++){

         if(i==n-1)
       printf("LINKED LIST[NODE: %d, DATA: %d, ADDRESS: NULL]\n",i,data[i]);
         else
           printf("LINKED LIST[NODE: %d, DATA: %d, ADDRESS: %d]\n",i,data[i],address[i]);


     }
printf("WHICH POSITION YOU WANT TO INSERT: \n");
scanf("%d",&node);
printf("WHICH NUMBER YOU WANT TO ADD: \n");
scanf("%d",&newdata);
n=n+1;
    for(j=n-1;j>=node-1;j--){
            data[j]= data[j-1] ;
            address[j]=address[j-1];

    }
  data[node-1]= newdata;
  address[node-1]=n-1;
  int k=node-1;

     for(i=0;i<n;i++){

         if(i==n-1)
       printf("LINKED LIST[NODE: %d, DATA: %d, ADDRESS: NULL]\n",i,data[i]);
         else
           printf("LINKED LIST[NODE: %d, DATA: %d, ADDRESS: %d]\n",i,data[i],address[i]);

     }
printf("WHICH POSITION YOU WANT TO UPDATE DATA: \n");
scanf("%d",&node);
printf("WHICH NUMBER YOU WANT TO UPDATE: \n");
scanf("%d",&newdata);
data[node-1]= newdata;

    for(i=0;i<n;i++){

         if(i==n-1)
       printf("LINKED LIST[NODE: %d, DATA: %d, ADDRESS: NULL]\n",i,data[i]);
         else
           printf("LINKED LIST[NODE: %d, DATA: %d, ADDRESS: %d]\n",i,data[i],address[i]);

     }
printf("\n\nWHICH POSITION YOU WANT TO DROP DATA: \n");
scanf("%d",&node);

    for(i=0;i<n;i++){
            if(i==node-1){
                continue;
            }

    else if(i==node-2){
            if(i==k)
                printf("LINKED LIST[NODE: %d, DATA: %d, ADDRESS: NULL]\n",i,data[i]);
           else
              printf("LINKED LIST[NODE: %d, DATA: %d, ADDRESS: %d]\n",i,data[i],address[i]);

     }

   else{
        if(i==k)
                printf("LINKED LIST[NODE: %d, DATA: %d, ADDRESS: NULL]\n",i,data[i]);
           else
           printf("LINKED LIST[NODE: %d, DATA: %d, ADDRESS: %d]\n",i,data[i],address[i]);
   }

}

printf("\n\n\n");
return 0;


}
