// Cullen Bair

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i=0;
    unsigned int f, sum;

    for(i=0;fib(i) < 4000000;i++)
    {
        f = fib(i);
        if(f%2 == 0)
            sum += f;
    }
    printf("The sum of the even values of the Fibonacci sequence that do not exceed 4 million: %u", sum);

    return 0;
}

unsigned int fib(int n)
{
    int *array, i;
    unsigned int r;

    if(n<2)
        return n;

    array = malloc(sizeof(unsigned int) * (n+1));

    array[0] = 0;
    array[1] = 1;

    for(i=2;i <= n;i++)
        array[i] = array[i-1] + array[i-2];

    r = array[n];

    free(array);

    return r;
}
