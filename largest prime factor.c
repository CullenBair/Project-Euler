// Cullen Bair

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int main(void)
{
    printf("%d\n", UINT_MAX);
    printf("What is the largest prime factor of 600851475143?\n");
    printf("The answer is: %d\n", largestPrime(775146));
}

int largestPrime(int n)
{
    int m = 2, largest = 1;

    while(m <= n)
    {
        if(n % m == 0)
            largest = m;

        m = nextPrime(m+1);
    }

    return largest;
}

int nextPrime(int n)
{
    int i, root, going = 1;

	if(n % 2 == 0)
		n++;

	while(going)
	{
		going = 0;
		root = sqrt(n);

		for(i=3; i <= root;i++)
		{
			if(n % i == 0)
			{
				n += 2;
				going = 1;
				break;
			}
		}
	}
	return n;
}
