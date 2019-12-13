#include <cstdio>
#include <cmath>

using namespace std;

/*
 * Find all factors of an integer - Trial division
 *
 * @param int n
 * @return int*
 */
int* FindFactors(int n)
{
	// New array to store the factors of n.
	int* factors = new int;

	// Counter
	int c = 0;

	for (int i = 1; i <= sqrt(n); ++i)
	{
		// Check if i is a factor of n.
		if (n%i == 0)
		{
			// Then store i as a factor of n.
			factors[c++] = i;

			// We dont want to add a factor twice.
			if (i != sqrt(n))
				factors[c++] = n/i;
			
		}
	}

	return factors;
}

int main(int argc, char const *argv[])
{
	int n;
	int *primes = FindFactors(n = 12);
	while(primes)
	{
		if (*primes > n) break;
		printf("%d\n", *primes);
		primes++;
	}
	
	return 0;
}
