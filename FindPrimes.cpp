#include <cstdio>
#include <cmath>

// /**
//  * Find all primes numbers upto n
//  *
//  * @param int n
//  * @return int* 
//  */
// int* FindPrimes(int n) // O(n.sqrt(n))
// {
// 	int *primes = new int; // O(1)
// 	int c = 0; // O(1)
// 	for (int i = 2; i <= n; ++i)
// 	{
// 		if (isPrime(i)) // O(sqrt(n))
// 		{
// 			primes[c] = i; // O(1)
// 			c++; // O(1)
// 		}
// 	}
// 	return primes; // O(1)
// }

/**
 * Find all primes numbers upto n using Sieve of Eratosthenes Method
 *
 * @param int n
 * @return int* 
 */
int* FindPrimes2(int n)
{
	int *primes = new int(n+1);

	for (int i = 0; i <= n; ++i)
	{
		primes[i] = 1; // Let's take all the numbers from 0 to n as primes
	}
	primes[0] = 0; // 0 isnt prime
	primes[1] = 0; // 1 isnt prime

	for (int i = 2; i <= n; ++i)
	{
		if (primes[i] == 1)
		{
			for (int j = 2; i*j <= n; ++j)
			{
				primes[i*j] = 0;
			}
		}
	}
	return primes;
}

int main(int argc, char const *argv[])
{
	int *primes = FindPrimes2(15);
	int c=0;
	while(primes)
	{
		if (*primes > 1) break;
		if (*primes == 1)
		{
			printf("%d\n", c);
		}
		c++;
		primes++;
	}
	return 0;
}