#include <stdio.h>

int main() {
	char c;
	printf("\nPlease enter the character: ");
	scanf("%c", &c);
	int cap = (c >= 65 && c <= 90);
	int small = (c >= 97 && c <= 122);
	
	if (cap) {
		printf("\n%c is an alphabet.", c);
		printf("It is in uppercase, the lowercase is %c\n", (c+32));
	} else if (small) {
		printf("\n%c is an alphabet.", c);
		printf("It is in lowercase, the uppercase is %c\n", (c-32));
	} else if (c >= 48 && c <= 52) {
		printf("\nIt is an number\n");
	} else {
		printf("\nIt is an symbol\n");
	}
}
