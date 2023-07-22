#include <stdio.h>
#include <ctype.h>

int xStrlen(char* str) {
	int t = 0;
	while(*str != '\0') {
		t++;
		str++;
	}
	return t;
}

int main() {
	char str[1001];
	printf("Enter the string: \n");
	gets(str);
	printf("The length of the string is: %d\n", xStrlen(str));
	
	return 0;
}
