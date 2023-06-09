#include <stdio.h>
#include <string.h>

struct client
{
    char client_name[50];
    char client_phnNumber[50];

};

struct record
{
    char zone[30];
    struct client clients[50];
    int number_of_clients;
};

int searchClient(struct record s,struct client b)
{
    int i;

    for(i=0; i<s.number_of_clients; i++)
    {
        int res = strcmp(s.clients[i].client_phnNumber,b.client_phnNumber);
        if(res==0)
        {
            return i;
        }
    }
    return -1;
}


int addClient(struct record *s,struct client b)
{
    if((*s).number_of_clients == 50)
    {
        return 0;
    }
    int noc = (*s).number_of_clients;
    (*s).clients[noc] = b;
    (*s).number_of_clients++;

    return 1;
}

int removeClient(struct record *s,struct client b)
{
    int res = searchClient(*s,b);
    if(res==-1) return 0;
    else if(res == (*s).number_of_clients-1)
    {
        (*s).number_of_clients--;
    }
    else
    {
        (*s).clients[res] = (*s).clients[(*s).number_of_clients-1];
        (*s).number_of_clients--;
    }
    return 0;

}



int main()
{
    int i;
    struct record records[5];

    char zone[30];

    printf("Enter zone:");
    gets(zone);
    strcpy(records[0].zone,zone);
    records[0].number_of_clients = 0;
    printf("Enter zone:");
    gets(zone);
    strcpy(records[1].zone,zone);
    records[1].number_of_clients = 0;
    printf("Enter zone:");
    gets(zone);
    strcpy(records[2].zone,zone);
    records[2].number_of_clients = 0;
    printf("Enter zone:");
    gets(zone);
    strcpy(records[3].zone,zone);
    records[3].number_of_clients = 0;
    printf("Enter zone:");
    gets(zone);
    strcpy(records[4].zone,zone);
    records[4].number_of_clients= 0;

    i=0;




    for(i=0;i<5;i++)
    {
        printf("%s\n",records[i].zone);
    }

   struct client temp;

   gets(temp.client_name);
   gets(temp.client_phnNumber);

   addClient(&records[0],temp);


    return 0;

}
