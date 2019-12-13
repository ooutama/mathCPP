#include <cstdio>
#include <cmath>

using namespace std;

/**
 * Verify prime - Trial division
 *
 * @param int n
 * @return bool 
 */
bool isPrime(int n)
{
	if (n < 2) return false;

	if (n%2 == 0) return (n == 2);

	for (int i = 3; i <= (int)sqrt(n); i += 2)
	{
		if (n%i == 0) return false;
	}
	return true;
}

int main(int argc, char const *argv[])
{
	if(isPrime(13) == true)
		printf("is prime");
		
	return 0;
}
