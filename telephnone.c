#include<stdio.h>

struct subscriber
{
char phonenumber[20];
char name[20];
char zone[20];
int amount;
}s;

void addrecords();
void listrecords();
void modifyrecords();
void deleterecords();
void searchrecords();
void payment();
char get;
int main()
{

	int phonenumber;
	int ch;



	while (1)
	{
		system("cls");

		printf("\n\t\t------WELCOME TO THE TELECOM BILLING MANAGEMENT SYSTEM---");

		printf("\n 1 : For Adding New Records.");
		printf("\n 2 : For Listing Records");
		printf("\n 3 : For Modifying Records.");
		printf("\n 4 : For Payments");
		printf("\n 5 : For Searching Records.");
		printf("\n 6 : For Deleting Records.");
		printf("\n 0 : For Exit\n");

		printf("\n\n\n Enter Your Option: ");

		scanf("%d",&ch);


		switch(ch)
		{

			case 1:
				addrecords();break;
			case 2:
				listrecords();break;
			case 3:
				modifyrecords();break;
			case 4:
				payment();break;

			case 5:
				searchrecords();break;
			case 6:
				deleterecords();break;
			case 7:
				system("cls");

				printf("\n\n\t\t\t\tTHANK YOU FOR USING OUR TELECOM SERVICE");


				exit(0);
				break;

			default:
				system("cls");
				printf("Incorrect Input");
				printf("\nAny key to continue");
				getch();
		}
	}
}
void addrecords()
{
	FILE *f;
	char test;

	f=fopen("doc.txt","ab+");

	if(f==0)
	{   f=fopen("doc.txt","wb+");
		system("cls");

		printf("\n Press Any Key To Continue.....");

		getch();
	}
	while(1)
	{
		system("cls");
		printf("\n Enter Phone Number:");
		fflush(stdin);
		gets(s.phonenumber);
        printf("\n Enter Your Name:");
		fflush(stdin);
		gets(s.name);
        printf("\n Enter Your Zone:");
		fflush(stdin);
		gets(s.zone);
        printf("\nEnter Your Amount:");
		scanf("%d",&s.amount);

        fwrite(&s,sizeof(s),1,f);


		system("cls");
		printf("Thank you...Your Record Successfully Added!!");

		printf("\n Press esc key to exit, any other key to add other record:");

		test=getche();
		if(test==27)
			break;
	}
	fclose(f);
}


void listrecords()
{
	FILE *f;
	int i;
	if((f=fopen("doc.txt","rb"))==NULL)
		exit(0);
	system("cls");

	printf("Phone Number\t\tUser Name\t\t\tZone\t\t\tAmount\n");

	while(fread(&s,sizeof(s),1,f)==1)
	{
		printf("\n%-10s\t\t %-20s\t\t %-20s \tTK %d/-",s.phonenumber,s.name,s.zone,s.amount);
	}
	printf("\n");


fclose(f);
getch();
}

void deleterecords()
{
    char clientname[20];
    FILE *f,*ft;
    struct subscriber;

    system("cls");

    printf("<--:DELETE RECORD:-->\n\n");

    printf("Enter Name of Client to delete record: ");
    fflush(stdin);
    gets(clientname);
   f = fopen("doc.txt","rb+");

    if(f == NULL){
       printf("Error opening file");
        exit(1);
    }
    ft = fopen("tem.txt","wb+");
    if(ft == NULL){
      printf("Error opening file");
        exit(1);
    }

    while(fread(&s,sizeof(s),1,f) == 1){
        if(strcmp(clientname,s.name)!=0)

            fwrite(&s,sizeof(s),1,ft);

    }
    fclose(f);
    fclose(ft);
    remove("doc.txt");
    rename("tem.txt","doc.txt");



}


void searchrecords()
{
	FILE *f;
	char phonenumber[20];
	int flag=1;
	f=fopen("doc.txt","rb+");
	if(f==0)
		exit(0);
	fflush(stdin);
	system("cls");
	printf("Enter Phone Number to search in our Database: ");
	scanf("%s", phonenumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{	system("cls");
			printf(" Record Found ");
			printf("\n\nPhonenumber: %s\n Name: %s\n Zone: %s\n Amount: Tk %d\n",s.phonenumber,s.name,s.zone,s.amount);
			flag=0;
			break;
		}
		else if(flag==1)
		{	system("cls");
			printf("Requested Phone Number Not found in Our database");
		}
	}
	getch();
	fclose(f);
}

void modifyrecords()
{
	FILE *f;
	char phonenumber[20];
	long int size=sizeof(s);
	if((f=fopen("doc.txt","rb+"))==NULL)
		exit(0);
	fflush(stdin);
	system("cls");
	printf("Enter Phone Number to Modify in our Database: ");
	scanf("%s", phonenumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{
			system("cls");
		printf("\n Enter Phone Number:");
		scanf("%s",&s.phonenumber);

		printf("\n Enter Your Name:");
		fflush(stdin);
		scanf("%[^\n]",&s.name);

		printf("\n Enter Your Zone:");
		fflush(stdin);
		scanf("%[^\n]",&s.zone);

		printf("\nEnter Your Amount:");
		scanf("%d",&s.amount);

			fseek(f,-size,SEEK_CUR);
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	fclose(f);
}

void payment()
{
	FILE *f;
	char phonenumber[20];
	long int size=sizeof(s);
	int amt;
	int i;
	if((f=fopen("doc.txt","rb+"))==NULL)
		exit(0);
	fflush(stdin);
	system("cls");
	printf("Enter Phone Number For payment: ");
	scanf("%s", phonenumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{
			system("cls");
			printf("\n Your Phone No.: %s",s.phonenumber);
			printf("\n Your Name: %s",s.name);
			printf("\n Your Current amount: %d",s.amount);
			printf("\n\n\n");

			printf("\n\nEnter Amount of payment:");
			fflush(stdin);
			scanf("%d",&amt);
			s.amount=(amt-s.amount);
			fseek(f,-size,SEEK_CUR);
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	system("cls");
	printf("THANK YOU %s FOR YOUR TIMELY PAYMENTS",s.name);
	getch();
	fclose(f);
}
