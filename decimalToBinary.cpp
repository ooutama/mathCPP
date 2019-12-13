#include <cstdio>
#include <algorithm>

using namespace std;

/**
 * Convert decimal number to binary format
 *
 * @param int n
 * @param int binary = 2
 * @return int* digits
 */
int* decimalToBinary(int n, int binary = 2)
{
	// New array to store the digits of binary format.
	int* digits = new int;

	// Indice of array
	int i = 0;

	// While n is sup than 0
	while (n > 0)
	{
		// Store the reminder of n / 2
		digits[i] = n % binary;

		// Give to n the new number which is n / 2
		n = n / binary;

		// Increase the indice
		i++;
	}

	return digits;
}

int main(int argc, char const *argv[])
{
	int *mmo = decimalToBinary(12580);
	
	while(mmo)
	{
		if(*mmo>1)break;
		printf("%d\n", *mmo);
		mmo++;
	}

    delete mmo;
	return 0;
}
