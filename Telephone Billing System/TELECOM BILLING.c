#include<stdio.h>

struct client
{
char phonenumber[20];
char name[20];
char zone[20];
int amount;
}s;

void add(); //method add korar jonno
void list(); // list method
void modify();// eikhane sb gula e method declare korse
void deleteclient();
void search();
void payment();

int main()
{
   int ch;
    while (1)//loop cholte thakbo
	{
		system("cls");

		printf("\n\t\tWELCOME TO THE TELECOM BILLING MANAGEMENT SYSTEM\n");

		printf("\n 1 : For Adding New Client.");
		printf("\n 2 : For Client Info");
		printf("\n 3 : For Modifying Records");
		printf("\n 4 : For Payment");
		printf("\n 5 : For Search Client");
		printf("\n 6 : For Deleting Records");
		printf("\n 0 : For Exit\n");

		printf("\n\n\n Enter Your Option: ");

		scanf("%d",&ch);


		switch(ch)
		{

			case 1:// option 1 a dile add method call korbo tarpor break korbo
				add();break;
			case 2:
				list();break;
			case 3:
				modify();break;
			case 4:
				payment();break;

			case 5:
				search();break;
			case 6:
				deleteclient();break;

			case 0:
				system("cls");
                printf("\n\n\t\t\tTHANK YOU FOR USING OUR TELECOM SERVICE");
				exit(0);
				break;

			default:
				system("cls");// eta hoitase noton screen show korar jonno jokhn run korbi ektar por ekta noton screen ashbo
				printf("Incorrect Input");
				printf("\nAny key to continue");
				getch();
		}
	}
}
void add()
{

	FILE *f;// file create korsi
     char test;

	f=fopen("a.txt","ab+");/

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

        fwrite(&s,sizeof(s),1,f);// ettokhn gets diya jei data gula input nilo eikhane sb file a likhar jonno
        system("cls");
		printf("Thank you...Your Record Successfully Added!!");

      printf("\nPress esc key to exit, any other key to add other record:");

		/*test=getche();
		if(test==27)*/
			break;

	}
	fclose(f);// file sb smy close korte hoibo ekta method er kaj sesh hoile


}


void list()
{
	FILE *f;
	int i;
	if((f=fopen("a.txt","rb"))==NULL)// == null mane jokhn file a kisu thakbo na tokhn exit 0 mane kisu show korbo na
		exit(0);
	system("cls");

	printf("Phone Number\t\tUser Name\t\t\tZone\t\t\tAmount\n");

	while(fread(&s,sizeof(s),1,f)==1)// r data thakle eigula sb kisu file a show korbo mane file read kortase
	{
		printf("\n%-10s\t\t %-20s\t\t %-20s \tTK %d/-",s.phonenumber,s.name,s.zone,s.amount);
	}
	printf("\n");


   fclose(f);
   getch();



}

void deleteclient()
{
    char clientname[20];

    FILE *f,*ft;
    struct client;

    system("cls");

    printf("<--:DELETE RECORD:-->\n\n");

    printf("Enter Name of Client to Delete record: ");//client er nam input nitase
    fflush(stdin);
    gets(clientname);
   f = fopen("a.txt","rb+");//file open korbo

    if(f == NULL){//jodi file a oi nam er kew na thake tokhn ei msg gula dekhaibo
       printf("Error opening file");
        exit(1);
    }
    ft = fopen("b.txt","wb+");
    if(ft == NULL){
      printf("Error opening file");
        exit(1);
    }

    while(fread(&s,sizeof(s),1,f) == 1){// r noyto eikhane aissha file read koira nam mille oi nam delete koira dibo life thaikka
        if(strcmpi(clientname,s.name)!=0)// strcmp hoitase compare korar jonno nam duita
         {

         fwrite(&s,sizeof(s),1,ft);
         }

    }
    fclose(f);
    fclose(ft);
    remove("a.txt");// delete korar jonno file theke
    rename("b.txt","a.txt");



}


void search()
{
	FILE *f;

	char phone[20];
	int i=0;

     system("cls");

	printf("Enter Phone Number to search in our Database: ");
	fflush(stdin);
	gets(phone);

	f=fopen("a.txt","rb");



	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmpi(s.phonenumber,phone)==0)
		{
		    i=1;

			printf("\n\nPhonenumber: %s\nName: %s\nZone: %s\nAmount: Tk %d\n\n",s.phonenumber,s.name,s.zone,s.amount);

			break;
		}
	}
		fclose(f);

		if(i==0)
          {
			printf("\n\nRequested Phone Number Not FOUND in Our Database");
		  }
		  else{
            printf("\n\nRequested Phone Number FOUND in Our Database!!!!!");
		  }

       getch();
}

void modify()
{
	FILE *f;
	int i=0;
	char phonenumber[20];


	if((f=fopen("a.txt","rb+"))==NULL)// eikhaneo same file open koira number mille details dekhaibo  r noton koira abr sb kisur input chaibo
		exit(0);

	fflush(stdin);
	system("cls");
	printf("Enter Phone Number to Modify in our Database: ");
	scanf("%s", phonenumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{
             i=1;
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

			fseek(f,-sizeof(s),SEEK_CUR);
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	fclose(f);

	if(i==0)
          {
			printf("\n\nRequested Phone Number Not FOUND in Our Database");
		  }
		  else{
            printf("\n\nRequested Phone Number FOUND in Our Database!!!!!");
		  }
     getch();

}

void payment()
{
	FILE *f;
	char phonenumber[20];



	int amt;
	int i;
	if((f=fopen("a.txt","rb+"))==NULL)
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
			printf("\n Your Current Amount: %d",s.amount);
			printf("\n\n\n");

			printf("\n\nEnter Amount of Payment:");// aro koto amount pay korte chas etar input chaibo
			fflush(stdin);
			scanf("%d",&amt);

			s.amount=(s.amount+amt);

			fseek(f,-sizeof(s),SEEK_CUR);
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	system("cls");
	printf("THANK YOU %s FOR YOUR TIMELY PAYMENTS!!!",s.name);
	getch();
	fclose(f);
}

