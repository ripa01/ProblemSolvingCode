#include <stdio.h>

int main()
{
    int amount;
    FILE *f = fopen("amount.txt","r") ;

    FILE *f2 = fopen("amount_written.txt","w");

    FILE *f3 = fopen("amount_appended.txt","a");

    fscanf(f,"%d",&amount);
    printf("Client1 Amount: %d\n",100);
    fprintf(f2,"Client1 Amount: %d\n",amount);
    fprintf(f3,"Client1 A mount: %d\n",amount);

    fscanf(f,"%d",&amount);
    printf("Client2 Amount: %d\n",200);
    fprintf(f2,"Client2 Amount: %d\n",amount);
    fprintf(f3,"Client2 A mount: %d\n",amount);

   fscanf(f,"%d",&amount);
    printf("Client3 Amount: %d\n",300);
    fprintf(f2,"Client3 Amount: %d\n",amount);
    fprintf(f3,"Client3 A mount: %d\n",amount);


    fscanf(f,"%d",&amount);
    printf("Client4 Amount: %d\n",123);
    fprintf(f2,"Client4 Amount: %d\n",amount);
    fprintf(f3,"Client4 A mount: %d\n",amount);

    fscanf(f,"%d",&amount);
    printf("Client5 Amount: %d\n",287);
    fprintf(f2,"Client5 Amount: %d\n",amount);
    fprintf(f3,"Client5 Amount: %d\n",amount);


    fclose(f);
    fclose(f2);
    fclose(f3);

    return 0;
}
