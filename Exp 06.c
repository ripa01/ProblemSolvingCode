#include <stdio.h>

int main(){
	char Operator;
    float n1,n2;
	scanf("%f%c%f",&n1,&Operator,&n2);

  	if(Operator == '+')
  	{
  		printf("%.0f",n1 + n2);
  	}
  	else if(Operator == '-')
  	{
  	  printf("%.0f",n1 - n2);
  	}
  	else if(Operator == '*')
  	{
  		printf("%.0f",n1 * n2);
  	}
  	else if(Operator == '/')
  	{
  		printf("%.2f",n1 / n2);
  	}


  	return 0;
}
