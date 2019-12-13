#include <cstdio>
#include <cmath>

/*
 * Prime factorization of a number
 *
 * @param int n
 * @return void
 */
void PrimeFactorization(int n)
{
	// Counter of 
	int c;
	
	printf("%d = ", n);

	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n%i == 0)
		{
			c = 0;
			while(n%i == 0)
			{
				n = n/i;
				c++;
			}
			printf("(%d^%d)", i, c);
		}
	}

	if (n != 1)
	{
		printf("(%d^%d)\n", n, 1);
	}
}

int main(int argc, char const *argv[])
{
	PrimeFactorization(44);
	return 0;
}
