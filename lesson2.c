#include <stdio.h>

int main()
{
	int first;
	int second;
	printf("Give me a number; ");
	scanf("%i", & first);

	printf("Enter another number; ");
	scanf("%i", &second);

	int sum = first + second;

	printf("The sum of %i and %i = %i\n", first, second, sum);
	
	return 0;
}
