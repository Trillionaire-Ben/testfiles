#include <stdio.h>
#include <stdlib.h>

void add(int a, int b)
{
	printf("%d", a + b);
}

void mul(int a, int b)
{
	printf("%d", a * b);
}

void sub(int a, int b)
{
	printf("%d", a - b);
}

void divide(int a, int b)
{
	printf("%d", a % b);
}

void calculate(void (*ptr)(int, int))
{
	int *x, *y;

	printf("first value: %d\n", scanf("%d", *x));
	printf("second value: %d\n", scanf("%d", *y));
	(*ptr)(x, y );
}

void main()
{
	calculate(sub);
}
