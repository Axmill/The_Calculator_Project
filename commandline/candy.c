#include <stdio.h>

int main(void){
	int num1;
	int num2;
	int product;
	printf("Enter your first number.");
	scanf("%d", &num1);
	printf("Enter your second number.");
	scanf("%d", &num2);
	product = num1 * num2;
	printf("The product is %d", product);
	getch();
}
