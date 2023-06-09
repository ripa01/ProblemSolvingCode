#include<stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);

    if(marks<40)
    {
        printf("F");
    }
    else if(marks>=40 && marks<45)
    {
        printf("D");
    }
    else if(marks>=45 && marks<50)
    {
        printf("C");
    }
    else if(marks>=50 && marks<55)
    {
        printf("C+");
    }
    else if(marks>=55 && marks<60)
    {
        printf("B-");
    }
    else if(marks>=60 && marks<65)
    {
        printf("B");
    }
    else if(marks>=65 && marks<70)
    {
        printf("B+");
    }
    else if(marks>=70 && marks<75)
    {
        printf("A-");
    }
    else if(marks>=75 && marks<80)
    {
        printf("A");
    }
    else
    {
        printf("A+");
    }
    return 0;
}
