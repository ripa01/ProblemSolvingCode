#include<stdio.h>

struct clientrecord
{
char  type[20];
char  name[20];
char  zone[20];
int serialcode;
int telephonenumber;
int bill;

};

 struct payemnthistory
 {

 char name[10];
 struct clientrecord list[20];
  int clientrecord_count;

 };
int add_client(struct clientrecord c, struct payemnthistory p)
{
    printf("add_client\n");
    if(p.clientrecord_count<20)
    {
        printf("add_client_if\n");
        int index = p.clientrecord_count;
        p.list[index] = c;
        p.clientrecord_count++;
        return 1;
    }
    else
    {
        return 0;
    }
}
void print_clients(struct paymenthistory p)
{
    printf("print_clients\n");
   int i;
   for(i=0;i<history1.clientrecord_count;i++)
{
    printf("%s\n",history1.list[i].name);
}
}



 int main()
{
 struct clientrecord person1;
 strcpy(person1.type,"Paid");
 strcpy(person1.name,"Mr.Akash");
 strcpy(person1.zone,"Dhaka,Romna");
 person1.serialcode = 252;
 person1.telephonenumber = 4427089;
 person1.bill = 356;

printf("%s\n",person1.name);


struct clientrecord person2;
strcpy(person2.type,"Arrears");
strcpy(person2.name,"Mr.Robin");
strcpy(person2.zone,"Dhaka,Gendaria");
person2.serialcode = 002;
person2.telephonenumber = 74544032;
person2.bill = 506;

printf("%s\n",person2.name);



struct clientrecord person3;
strcpy(person3.type,"Paid");
strcpy(person3.name,"Rahela");
strcpy(person3.zone,"borishal,Sodor");
person3.serialcode = 7775;
person3.telephonenumber = 6614032;
person3.bill = 287;

printf("%s\n",person3.name);


struct payemnthistory history1 ;
strcpy(history1.name,"Dhaka");
history1.clientrecord_count=0;

//insert

printf("---Add---\n");

history1.list[history1.clientrecord_count] = person1;
history1.clientrecord_count++;

history1.list[history1.clientrecord_count] = person2;
history1.clientrecord_count++;

history1.list[history1.clientrecord_count] = person3;
history1.clientrecord_count++;

printf("---Print---\n");

int i;
for(i=0;i<history1.clientrecord_count;i++)
{
    printf("%s\n",history1.list[i].name);
}
return 0;
}
