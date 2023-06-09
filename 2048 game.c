#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int p, q;
	scanf("%d", &p);
	for (q = 0; q < p; q++)
	{
		int num, sum = 0, temp, k;
		scanf("%d", &num);
		for (k = 0; k < num; k++)
		{
			scanf("%d", &temp);
			if (temp <= 2048)
			{
				sum = sum + temp;
			}
			else
			{
				continue;
			}
		}
		if (sum >= 2048)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
