#include <stdio.h>

#define N 5

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int
main (int argc, char *argv[])
{
	int a[N] = {1, 2, 4, 6, 10}, largest, second_largest;

	find_two_largest(a, N, &largest, &second_largest);
	
	printf("%d %d\n", largest, second_largest);
	return 0;
}

void 
find_two_largest(int a[], int n, int *largest, int *second_largest)
{
  int i;

  if (a[0] > a[1]) {
    *largest = a[0];
    *second_largest = a[1];
  } else {
    *largest = a[1];
    *second_largest = a[0];
  }

  for (i = 2; i < n; i++)
    if (a[i] > *largest) {
      *second_largest = *largest;
      *largest = a[i];
    } else if (a[i] > *second_largest)
      *second_largest = a[i];
}
