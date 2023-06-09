
/*Using this project you can perform and manage billing operations like they do in Telecom companies.
You can also make payment by providing your phone number instead of name and all data added or modified are recorded in a file.
You can add records with name, phone number, and the amount of payment, and You can view, modify, search and delete existing records.
This project will also teach you how to add, list, edit, search and delete records using file handling.

NB: You Need to change Drive/File path accordingly, Here I am doing in D:/
*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>


struct subscriber
{
char phonenumber[20];
char name[50];
float amount;
}s;

void addrecords();
void listrecords();
void modifyrecords();
void deleterecords();
void searchrecords();
void payment();
char get;


int main()//started main function//
{

    int password;
	int phonenumber;
	int choice;



	system("cls");
	system("color 3f");

	printf("\n\n\n\n\n\n\n\n\n\t\t**************************************************************");
	printf("\n\t\t------WELCOME TO THE TELECOM BILLING MANAGEMENT SYSTEM---");
	printf("\n\t\t**************************************************************");
	printf("\n\t\tPress Any Key To Continue...");
	Sleep(2000);
	getch();
    system("cls");
	while (1)
	{
		system("cls");
		printf("\n 1 : For Adding New Records.");
		printf("\n 2 : For Listing Records");
		printf("\n 3 : For Modifying Records.");
		printf("\n 4 : For Payments");
		printf("\n 5 : For Searching Records.");
		printf("\n 6 : For Deleting Records.");
		printf("\n 7 : For Exit\n");

		printf("\n\n\n Enter You Choice: ");
		choice=getche();

		choice=toupper(choice);

		switch(choice)
		{
			case 1:
				payment();break;
			case 2:
				addrecords();break;
			case 3:
				listrecords();break;
			case 4:
				modifyrecords();break;
			case 5:
				searchrecords();break;
			case 6:
				deleterecords();break;
			case 7:
				system("cls");
				printf("\n\n\t\t\t\tTHANK YOU FOR USING OUR SERVICE.");
				Sleep(2000);
				exit(0);
				break;
			default:
				system("cls");
				printf("Incorrect Input");
				printf("\nPress Any key to continue");
				getch();
		}
	}
}//end of main//
void addrecords()//This function is used to add all the records to the file.//
{
	FILE *f;
	char test;
	f=fopen("d:/file.ojs","ab+");
	if(f==0)
	{   f=fopen("d:/file.ojs","wb+");
		system("cls");
		printf("Please Wait While We Configure Your Computer");
		printf("\nPress Any Key To Continue...");
		getch();
	}
	while(1)//This loop is used to add all the record about Billing//
	{
		system("cls");
		printf("\n Enter Phone Number: ");
		scanf("%s",&s.phonenumber);
		printf("\n Enter Name: ");
		fflush(stdin);
		scanf("%[^\n]",&s.name);
		printf("\n Enter Amount: ");
		scanf("%f",&s.amount);
		fwrite(&s,sizeof(s),1,f);
		fflush(stdin);
		system("cls");
		printf("1 Record Successfully Added");
		printf("\n Press ESC Key To Exit, Any Other Key To Add Another Record: ");
		test=getche();
		if(test==27)
			break;
	}
	fclose(f);
}
void listrecords()//This function is used to list all the records//
{
	FILE *f;
	int i;
	if((f=fopen("d:/file.ojs","rb"))==NULL)
		exit(0);
	system("cls");
	printf("Phone Number\t\tUser Name\t\t\tAmount\n");
	for(i=0;i<79;i++)
		printf("-");
	while(fread(&s,sizeof(s),1,f)==1)
	{
		printf("\n%-10s\t\t%-20s\t\tTK %.2f /-",s.phonenumber,s.name,s.amount);
	}
	printf("\n");
	for(i=0;i<79;i++)
		printf("-");

fclose(f);
getch();
}
void deleterecords()//This funtion is used to delete the record.//
{
	FILE *f,*t;
	int i=1;
	char phonenumber[20];
	if((t=fopen("d:/temp.ojs","w+"))==NULL)
	exit(0);
	if((f=fopen("d:/file.ojs","rb"))==NULL)
	exit(0);
	system("cls");
	printf("Enter The Phone Number To Be Deleted From The Database: ");
	fflush(stdin);
	scanf("%[^\n]",phonenumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{       i=0;
			continue;

		}
		else
			fwrite(&s,sizeof(s),1,t);
	}
	if(i==1)
	{       system("cls");
		printf("Ooops !! Phone Number \"%s\" Not Found",phonenumber);
		remove("d:/file.ojs");
		rename("d:/temp.ojs","d:/file.ojs");
		getch();
		fclose(f);
		fclose(t);
		main();
	}
	remove("d:/file.ojs");
	rename("d:/temp.ojs","d:/file.ojs");
	system("cls");
	printf("The Number %s Successfully Deleted!!!!",phonenumber);
	fclose(f);
	fclose(t);
	getch();
}
void searchrecords()//This funtion is used to search a record//
{
	FILE *f;
	char phonenumber[20];
	int flag=1;
	f=fopen("d:/file.ojs","rb+");
	if(f==0)
		exit(0);
	fflush(stdin);
	system("cls");
	printf("Enter Phone Number To Search In Our Database");
	scanf("%s", phonenumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{	system("cls");
			printf(" Record Found ");
			printf("\n\nPhoneNumber: %s\nName: %s\nAmount: TK %0.2f\n",s.phonenumber,s.name,s.amount);
			flag=0;
			break;
		}
		else if(flag==1)
		{	system("cls");
			printf("Oops !! Requested Phone Number Not Found In Our Database");
		}
	}
	getch();
	fclose(f);
}
void modifyrecords()//This funtion is used to modify the record.//
{
	FILE *f;
	char phonenumber[20];
	long int size=sizeof(s);
	if((f=fopen("d:/file.ojs","rb+"))==NULL)
		exit(0);
	system("cls");
	printf("Enter Phone Number Of The Subscriber To Modify: ");
	scanf("%[^\n]",phonenumber);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{
			system("cls");
			printf("\n Enter Phone Number: ");
			scanf("%s",&s.phonenumber);
			printf("\n Enter Name: ");
			fflush(stdin);
			scanf("%[^\n]",&s.name);
			printf("\n Enter Amount: ");
			scanf("%f",&s.amount);
			fseek(f,-size,SEEK_CUR);
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	fclose(f);
}
void payment()//This funtion is used for payment//
{
	FILE *f;
	char phonenumber[20];
	long int size=sizeof(s);
	float amt;
	int i;
	if((f=fopen("d:/file.ojs","rb+"))==NULL)
		exit(0);
	system("cls");
	printf("Enter Phone Number Of The Subscriber For Payment");
	scanf("%[^\n]",phonenumber);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{
			system("cls");
			printf("\n Phone No.: %s",s.phonenumber);
			printf("\n Name: %s",s.name);
			printf("\n Current Amount: %f",s.amount);
			printf("\n");
			for(i=0;i<79;i++)
				printf("-");
			printf("\n\nEnter Amount Of Payment : ");
			fflush(stdin);
			scanf(" %f",&amt);
			s.amount=s.amount-amt;
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

