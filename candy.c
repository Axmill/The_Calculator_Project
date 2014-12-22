#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int numbers, count;
	int product = 1;
	printf("How many numbers do you want to multiply?");
	scanf("%d", &numbers);
	int* multiply = malloc(sizeof(int) * numbers);
	
	if(multiply == NULL)
	{
	    printf("Malloc failed!");
	    return 1;
	}

	printf("Enter your numbers: ");

	for(count=0; count<numbers; count++)
	{
	    scanf("%d", multiply);
	    product = product * (*multiply);
	}

	printf("The product is %d", product);
	return 0;
}
