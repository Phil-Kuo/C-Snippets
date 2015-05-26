#include <stdio.h>
#include <math.h>
#define N 100000

int is_prime (int n);

int
main (int argc, char *argv[])
{
	int n, primes[N], i, k, num_twin_prime = 0;
	
	scanf("%d", &n);
	
	/*find out the primes between 1 and N, and stored in primes[N]*/
	for (i = 1, k = 0; i <= n; i++)
	{
		if(is_prime(i) && k < n)
		{
			primes[k++] = i;
		}
	}
		
	/*calculate difference of adjacent two prime number*/
	for (i = 0; i < k - 1; i++)
	{
		if ((primes[i+1] - primes[i]) == 2)
		{
			num_twin_prime++;
		}
	}
	
	printf("%d\n", num_twin_prime);
	return 0;
}

int
is_prime(int n)
{
	int i;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
