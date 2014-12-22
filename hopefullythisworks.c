#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int numbers, count;
	int sum = 0;
	printf("How many numbers do you wish to enter?\n");
	scanf("%d", &numbers);
	int* add = malloc(sizeof(int) * numbers);
	
	if(add == NULL)
	{
	    printf("Malloc failed!");
	    return 1;
	}
	
	printf("Enter your numbers: ");

	for(count=0; count<numbers; count++)
	{
	    scanf("%d", add);
	    sum = sum + (*add);
	}

	printf("The sum is %d.", sum);
	return 0;
}
