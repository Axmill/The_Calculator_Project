#include <stdio.h>

int main(void){
	printf("Hello, Computer");
	getchar();
	int num1;
	int num2;
	int diff;
	printf("Enter your number:");
	scanf("%d", &num1);
	scanf("%d", &num2);
	diff = num1 - num2;
	printf("The difference is %d", diff);
	getch();
}
