#include<stdio.h>
#include<string.h>

// structure declared

typedef struct
{
    char name[40];
    int age;
    float mole;
    char g[10];
    char s;
    char P_idx[10];

} Eaid;

typedef struct
{
    int P_idx;
    int number_of_patient;
    Eaid total_patient[50]; // array of patient structure

} hospital;


// Search Patient

int searchPatient(hospital a , Eaid p)
{

    int i;

    for(i=0; i < a.total_patient; i++)
    {

        int res = strcmp(a.total_patient[i].P_idx,p.P_idx);

        if(res == 0)
        {
            return i;
        }
    }
    return -1;

}


// Add Patient

int addPatient(struct hospital a , Eaid p)
{

    if((*a).total_patient == 50)
    {

        return 0;
    }
    int patient = (*a).total_patient;

    (*a).total_patient ++;

    return 1;
}


// Remove patient

int removePatient(hospital *a , Eaid p)
{

    int res = searchPatient(*a,p);

    if(res == -1)
    {

        return 0;

    }
    else if(res == a -> total_patient - 1)
    {

        p.total_patient--;
    }

    return 0;

}



// function execution 1


char suggestion(Eaid p)
{

    char s;

    if(p.mole >= 3.9 || p.mole <= 6.0)
    {

        s = strcpy(s,"If your mole isn't permanently over 6.1, you are not a Diabetic patient.\n");
    }
    else if(p.mole >= 6.1 || p.mole <= 6.9)
    {

        s = strcpy(s,"You are a Diabetic patient but your sugar is in range.\n");
    }
    else if(p.mole >= 7.0 || p.mole <= 7.8)
    {

        s = strcpy(s,"Your sugar has a bad tendency of gradual increase.Maintain a balance diet.\n");
    }
    else if(p.mole >= 7.9 || p.mole <= 10.9)
    {

        s = strcpy(s,"Consult to a physician.Lead life according to his suggestion.Do more manual labour.\n");
    }
    else if(p.mole >= 11.0 || p.mole <= 13.9)
    {

        s = strcpy(s,"Your sugar is out of range.Take medicine according to prescription.Exercise regularly atleast once a day.\n");
    }
    else if(p.mole >= 14.0 || p.mole <= 16.3)
    {

        s = strcpy(s,"You may need insulin.Consult to a doctor.Maintain food habit strictly.Avoid fats.\n");
    }
    else if(p.mole >= 16.4 || p.mole <= 17.8)
    {

        s = strcpy(s,"Your sugar is very high.Be alert about your eyesight,kidney,lungs,any kind of injuries to your leg.\n");
    }
    else if(p.mole >= 17.9 || p.mole <= 20.0)
    {

        s = strcpy(s,"Your sugar is very high.Eat only vegitable with rice or ruties.Take insulin as prescribed.\n");
    }
    else
    {

        s = strcpy(s,"Contact to a hospital,admit there,follow the suggestions given by the doctors.\n");
    }
}


//Scanning & Printing procedure

   FILE *fp;

int main()
{


        printf("\n\n\n\n");
        printf("Press enter to clear screen\n");
        getchar();
        system("cls");

    Eaid p;

    printf("Name:");
    gets(p.name);

    printf("Age:");
    scanf("%d",&p.age);

    printf("Enter moles:");
    scanf("%f",&p.mole);

    getchar();
    printf("Gender:");
    gets(p.g);

    printf("Patient Id:");
    gets(p.idx);

    p.s = suggestion(p);

    printf("%c",p.s);

    // BMI

    float x,y,BMI;
    printf("If you are interested to check your Body Mass Index (BMI) enter your wieght here (kg):");
    scanf("%f\n",&x);
    printf("Enter your height here (m):");
    scanf("%f\n",&y);

    BMI = x/y*y;

    printf("Your BMI is :%f\n",BMI);

    if(BMI <= 18.5 || BMI <= 24.9)
    {
        printf("Your BMI is ok.\n");
    }
    else if(BMI <= 25.0 || BMI <= 29.9)
    {
        printf("Your BMI is alerming.You're in the overweight range.\n");
    }
    else
    {
        printf("Your BMI is very high.You're in the obese range.Higher BMI may lead you to death.\n");
    }

    printf("Take care ,Don't stress, You've done enough today.\n");
    return 0;
}


