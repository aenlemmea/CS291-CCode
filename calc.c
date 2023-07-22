#include <stdio.h>
#include <stdlib.h>


int main() {
	int c,x;
	double a, b;
		
	do{
	system("clear");
	printf("\nPlease enter the number of operation to perform:\n");
	
	printf("1. Addition\n");
	printf("2. Substraction\n");
	printf("3. Division\n");
	printf("4. Multiplication\n");
	printf("5. Exit\n");
	
	printf("> ");
	scanf("%d", &c);
	

	
	switch (c) {
		case 1:
			printf("\nEnter two numbers with a space between them to add: ");
			scanf("%lf %lf", &a, &b);
			printf("\nThe sum is: %g.\n", (a+b));
			break;
		case 2:
			printf("\nEnter two numbers with a space between them to subtract: ");
			scanf("%lf %lf", &a, &b);
			printf("\nThe result is: %g.\n", (a-b)); 
			break;
		case 3:
			printf("\nEnter two numbers with a space between them to divide: ");
			scanf("%lf %lf", &a, &b);
			if (b == 0.0) {
				printf("\nCannot divide by 0. Terminating...");
			}
			else
				printf("The result is: %g.\n", (a / b)); 
			break;
		case 4:
			printf("\nEnter two numbers with a space between them to multiply: ");
			scanf("%lf %lf", &a, &b);
			printf("The result is: %g.\n", (a * b)); 
			break;

		case 5:
			printf("Terminating Program ...");
				return 0;
			break;
		default:
					printf("Invalid Input! Terminating ...");
		}
		printf("\nPress 1 to continue: ");
		scanf("%d",&x);
		}while(x==1);
		
		
		return 0;
	
}
