#include <cstdio>

/*
 * The greater number g where g/a and g/b
 * 
 * @param int a 
 * @param int b 
 * @return int  
 */
int euclid_gcd(int a, int b)
{

	while (b != 0)
	{
		int ref = a % b;
		a = b;
		b = ref;
	}

	return a;
}

int main(int argc, char const *argv[])
{
	printf("%d\n", euclid_gcd(124,400));
	return 0;
}
