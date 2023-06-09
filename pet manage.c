#include <stdio.h>

#define MAX 20
struct Pet
{
    char type[20];
    char name[20];
    char colour[20];
    int age;
    char favourite_person[20];
    char favourite_food[20];
};

struct House
{
    char name[10];
    struct Pet list[MAX];
    int pet_count;
};

void print_pet(struct Pet p)
{
    printf("Type: %s\n",p.type);
    printf("Name: %s\n",p.name);
    printf("Colour: %s\n",p.colour);
    printf("Age: %d\n",p.age);
    printf("Favourite person:%s\n",p.favourite_person);
    printf("Favourite food: %s\n",p.favourite_food);

}

int insert(struct Pet p, struct House *h)
{
//    int petCount = (*h).pet_count;
    int petCount = h->pet_count;

    if(petCount>=MAX)
    {
        return 0;
    }
    else
    {
//        (*h).list[petCount] = p;
//        (*h).pet_count++;

        h->list[petCount] = p;
        h->pet_count++;

        return 1;
    }
}

void print_all(struct House *h)
{
    int petCount = h->pet_count;

    int i;
    for(i=0;i<petCount;i++)
    {
        printf("Pet %d\n",i);
        print_pet(h->list[i]);
    }
}


int search(char name[], struct House *h)
{
    int petCount = h->pet_count;

    int i;
    for(i=0;i<petCount;i++)
    {
        int match_result = strcmp(name, h->list[i].name);
        if(match_result == 0) return i;
    }
    return -1;
}

int update(char name[], int age, struct House *h)
{
    int index = search(name,h);
    if(index == -1 )return 0;
    h->list[index].age = age;
    return 1;
}

int remove_pet(char name[], struct House *h)
{
    int petCount = h->pet_count;
    int index = search(name,h);
    if(index == -1 ) return 0;

    if(index == petCount-1)
    {
        h->pet_count--;
        return 1;
    }
    else
    {
        h->list[index] = h->list[petCount-1];
        h->pet_count--;
        return 1;
    }

}



int main()
{
    struct House h1,h2;
    struct House current_house;
    int option,house_no;

    printf("Enter your house no:\n");
    scanf("%d",&house_no);

     printf("\n\t\t------WELCOME TO THE TELECOM BILLING MANAGEMENT SYSTEM---");

		printf("\n 1 : For Adding New Records.");
		printf("\n 2 : For Search Records");
		printf("\n 3 : For Modifying Records.");
		printf("\n 4 : For Delete");
		printf("\n 5 : For Printing Records.");
		printf("\n 7 : For change house.");
		printf("\n 0 : For Exit\n");


    if(house_no==1)
    {
      current_house=h1;
    }
    else
    {
       current_house=h2;
    }


    while(1)
    {
        struct Pet p;
        char name[20];
        int age;
        int f;

        printf("Enter your option no:\n");
        scanf("%d",&option);
        getchar(); // catches the enter

        if(house_no==1)
        {
            h1=current_house;
        }
        else
        {
            h2=current_house;
        }

        switch(option)
        {
        case 1: ;
            //insert
            gets(p.type);
            gets(p.name);
            gets(p.colour);
            scanf("%d",&p.age);
            getchar();
            gets(p.favourite_person);
            gets(p.favourite_food);
            print_pet(p);

            insert(p,&current_house);

            break;
        case 2:
            // search
            gets(name);

            int index = search(name,&current_house);

            if(index == -1 ) printf("Not found\n");
            else printf("Found at index: %d\n",index);

            break;

        case 3:
            // update

            gets(name);

            scanf("%d\n",&age);
//            getint(age);
//            getchar();


            f = update(name,age,&current_house);


            break;
        case 4:
            // remove

            gets(name);

            f = remove_pet(name,&current_house);


            break;
        case 5:
            // print

            printf("Printing house 1\n");
            print_all(&h1);
            printf("Printing house 2\n");
            print_all(&h2);
            break;


        case 7:

            // house change

            printf("Enter your house no:\n");
            scanf("%d",&house_no);
            if(house_no==1)
            {
              current_house=h1;
            }
            else
            {
               current_house=h2;
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
