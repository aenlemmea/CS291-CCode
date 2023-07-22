#include <stdio.h>

void xStrcpy(char* s, char* c) {
	
	while (*s != '\0') {
		*c = *s;
		(s)++;
		(c)++;
	}
	
	*c = '\0';
	
}


int main() {
	char str[1001];
	char cpy[1001];
	printf("Enter the string: \n");
	gets(str);
	xStrcpy(str, cpy);
	printf("The copied string is: %s\n", cpy);
	
}
