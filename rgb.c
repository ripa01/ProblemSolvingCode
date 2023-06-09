#include <stdio.h>
int main()
{
  int array[100], n=3, c, location = 0;
  scanf("%d",&n)
for (c = 0; c < n; c++){


  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 1; c < n; c++)
    if (array[c] < array[location])
      location = c;
}
  printf("Minimum element is present at location %d and its value is %d.\n", location+1, array[location]);
  return 0;
}

