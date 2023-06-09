#include <stdio.h>
#define MAX 20

struct clientrecord
{
    char name[20];
    char gender[20];
    char distric[20];
    int age;
    float amount;
    char pn[20];
};

struct zone
{
    char name[10];
    struct clientrecord list[MAX];
    int clientrecord_count;
};

void print_client(struct clientrecord p)

{


       printf("Phone Number: %s\n",p.pn);
    printf("Name: %s\n",p.name);
    printf("Gender: %s\n",p.gender);
    printf("Distric: %s\n",p.distric);
    printf("Age: %d\n",p.age);
    printf("Amount: TK %.2f\n",p.amount);



}

int insert(struct clientrecord p, struct zone *h)
{

    int clientCount = h->clientrecord_count;

    if(clientCount>=MAX)
    {
        return 0;
    }
    else
    {


        h->list[clientCount] = p;
        h->clientrecord_count++;

        return 1;
    }
}

void print_all(struct zone *h)
{
    int clientCount = h->clientrecord_count;

    int i;
    for(i=0;i<clientCount;i++)
    {
        printf("Client %d\n",i);
        print_client(h->list[i]);
    }
}


int search(char name[], struct zone *h)
{
    int clientCount = h->clientrecord_count;

    int i;
    for(i=0;i<clientCount;i++)
    {
        int match_result = strcmp(name, h->list[i].name);
        if(match_result == 0) return i;
    }
    return -1;
}

int update(char name[], int age, struct zone *h)
{
    int index = search(name,h);
    if(index == -1 )return 0;
    h->list[index].age = age;
    return 1;
}

int remove_client(char name[], struct zone *h)
{
    int clientCount = h->clientrecord_count;
    int index = search(name,h);
    if(index == -1 ) return 0;

    if(index == clientCount-1)
    {
        h->clientrecord_count--;
        return 1;
    }
    else
    {
        h->list[index] = h->list[clientCount-1];
        h->clientrecord_count--;
        return 1;
    }

}

void save()
{
//    FILE * fp = fopen()
//    fprintf("")

}

int main()
{
    struct zone zn1,zn2;
    struct zone current_Zone;
    int option,Zone_no;

    printf(" ENTER ZONE NUMER 1 FOR DHAKA,BARISHAL,CHITTAGONG \n ENTER ANY ZONE NUMBER FOR OTHER DISTRIC\n\n\t\t\tENTER YOUR ZONE NUBMER: \n ");
    scanf("%d",&Zone_no);

    printf("\n\t\t------WELCOME TO THE TELECOM BILLING MANAGEMENT SYSTEM---");

		printf("\n 1 : For Adding New Records.");
		printf("\n 2 : For Searching Records");
		printf("\n 3 : For Modifying Records.");
		printf("\n 4 : For Deleting Records ");
		printf("\n 5 : For Printing Records.");
		printf("\n 6 : For Listing Records.");
		printf("\n 7 : For Changing Zone.");
		printf("\n 0 : For Exit\n");

    if(Zone_no==1)
    {
      current_Zone=zn1;
    }
    else
    {
       current_Zone=zn2;
    }


    while(1)
    {
        struct clientrecord p;
        char name[20];
        int age;
        int f;






        printf("Enter your option no:\n");
        scanf("%d",&option);
        getchar(); // catches the enter

        if(Zone_no==1)
        {
            zn1=current_Zone;
        }
        else
        {
            zn2=current_Zone;
        }

        switch(option)
        {
        case 1: ;
            //insert
            printf("ENTER YOUR PHONE NUMBER:");
            gets(p.pn);
             printf("ENTER YOUR NAME:");
            gets(p.name);
             printf("MALE OR FEMALE? ");
            gets(p.gender);
             printf("WHITCH DISTRIC? ");
             gets(p.distric);
              printf("ENTER YOUR AGE:");
            scanf("%d",&p.age);
            getchar();
             printf("ENTER YOUR AMOUNT OF PAYMENT:");
            scanf("%f",&p.amount);
            getchar();

            print_client(p);

            insert(p,&current_Zone);

            break;
        case 2:
            // search
            printf("ENTER CLIENT NAME FOR SEARCH:");
            gets(name);

            int index = search(name,&current_Zone);

            if(index == -1 ) printf("Not found\n");
            else printf("Found at index: %d\n",index);

            break;

        case 3:
            // update

            gets(name);

            scanf("%d\n",&age);
//            getint(age);
//            getchar();


            f = update(name,age,&current_Zone);


            break;
        case 4:
            // remove

            gets(name);

            f = remove_client(name,&current_Zone);


            break;
        case 5:
            // print

            printf("Printing Zone 01\n");
            print_all(&zn1);
            printf("Printing Zone 02\n");
            print_all(&zn2);
            break;
        case 6:
            // save
            break;
        case 7:

            // house change

            printf("Enter your ZONE no:\n");
            scanf("%d",&Zone_no);
            if(Zone_no==1)
            {
              current_Zone=zn1;
            }
            else
            {
               current_Zone=zn2;
            }
            break;
        case 0:
            // exit
//            save();
            exit(0);

        default:
            printf("Not a valid option\n");
        }
    }

    return 0;
}

