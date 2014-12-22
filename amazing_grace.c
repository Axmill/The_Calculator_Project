#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int numbers, count;
	int diff;
	
	printf("How many numbers are you subtracting?");
	scanf("%d", &numbers);
	
	int* subtract = malloc(sizeof(int) * numbers);

	if(subtract == NULL)
	{
	    printf("Malloc failed!");
	    return 1;
	}

	printf("Enter your numbers: ");
	
	scanf("%d", diff);

	for(count=1; count<numbers; count++)
	{
            scanf("%d", subtract);
	    diff = diff - (*subtract);
	}

	printf("The difference is %d.", diff);
	return 0;
}
