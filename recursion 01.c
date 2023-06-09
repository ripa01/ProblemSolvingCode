#include <stdio.h>

int move(int n, char source, char destination, char spare)
{ int count = 1;
if (n==1){
    printf("\n\nMove a disc from %c to %c", source, destination);
}
else{
    count += move(n-1, source, spare, destination);
             move(1, source, destination, spare);
    count += move(n-1, spare, destination, source);
}
return count;
}

int main()
{
int n, steps;
char A, B, C;
printf("Enter the number of disc :- ");
scanf("%d", &n);
printf("\nHere A is source, B is destination, C is spare.");
steps = move(n, 'A', 'C', 'B');
printf("\n\nNumber of steps taken is %d", steps);
return 0;
}
