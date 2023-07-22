#include <stdio.h>
#include <ctype.h>

int main() {
	char str[1001];
	int i = 0, t = 0;
	printf("\nEnter the string: \n");
	gets(str);
	
	printf("The abbreviated string is: \n");
	printf("%c", toupper(str[0]));
	
	for (i = 1; str[i] != '\0'; i++) {
		if (str[i] == ' ') {
			printf(".%c", toupper(str[i+1]));
			t = i + 2;
		}
	}
	
	for (i = t; str[i] != '\0'; i++) {
		printf("%c", str[i]);
	}
	printf("\n");
	
	return 0;
}
