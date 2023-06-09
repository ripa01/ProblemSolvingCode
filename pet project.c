#include <stdio.h>

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
    struct Pet list[20];
    int pet_count;
};

int add_pet(struct Pet p, struct House h)
{
    printf("add_pet\n");
    if(h.pet_count<20)
    {
        printf("add_pet_if\n");
        int index = h.pet_count;
        h.list[index] = p;
        h.pet_count++;
        return 1;
    }
    else
    {
        return 0;
    }
}

void print_pets(struct House h)
{
    printf("print_pets\n");
    int i;
    for(i=0; i<h.pet_count; i++)
    {
        printf("%s\n",h.list[i].name);
    }
}

int main()
{
    struct Pet dog1;
    strcpy(dog1.type,"Dog");
    strcpy(dog1.name,"Spyke");
    strcpy(dog1.colour,"White");
    dog1.age = 10;

    printf("%s\n",dog1.name);


    struct Pet cat1;
    strcpy(cat1.type,"Cat");
    strcpy(cat1.name,"Tom");
    strcpy(cat1.colour,"Blue");
    cat1.age= 5;

    printf("%s\n",cat1.name);

    struct Pet mouse1;
    strcpy(mouse1.type,"Mouse");
    strcpy(mouse1.name,"Jerry");
    strcpy(mouse1.colour,"Brown");
    mouse1.age=5;

    printf("%s\n",mouse1.name);

    struct Pet mouse2;
    strcpy(mouse2.type,"Mouse");
    strcpy(mouse2.name,"Nibbles");
    strcpy(mouse2.colour,"White");
    mouse2.age = 1;



    struct House house1;
    strcpy(house1.name,"UAP-CSE");
    house1.pet_count = 0;

    printf("---Add---\n");
    // insert
//    house1.list[house1.pet_count] = dog1;
//    house1.pet_count++;
//
//    house1.list[house1.pet_count] = cat1;
//    house1.pet_count++;
//
//    house1.list[house1.pet_count] = mouse1;
//    house1.pet_count++;
//
//    house1.list[house1.pet_count] = mouse2;
//    house1.pet_count++;

    add_pet(dog1,house1);
    add_pet(cat1,house1);
    add_pet(mouse1,house1);
    add_pet(mouse2,house1);

    printf("---Print---\n");

    print_pets(house1);




    return 0;
}
