#include <stdio.h>

int main()
{
    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3;

    printf("%f ", *ptr2);
    printf("%d\n", ptr2 - ptr1);



    int arr1[] = {10, 20, 30, 40, 50, 60};
    int *pt1 = arr;
    int *pt2 = arr + 5;
    printf("Number of elements between two pointer are: %d.\n",
                                (pt2 - pt1));
    printf("Number of bytes between two pointers are: %d\n",
                              (char*)pt2 - (char*) pt1);


        int a;
   char *x;
   x = (char *) &a;
   a = 512;
   x[0] = 1;
   x[1] = 2;
   printf("%d\n",a);

char *ptr = "GeeksQuiz";
 printf("%c", *&*&*ptr);



   int h = 300;
   char *k = (char *)&h;
   *++k = 2;
   printf("%d ",h);

q=p;
a=(*p)*(*q);
*p = a%b;
*q = a/b;
}
