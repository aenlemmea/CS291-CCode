#include <stdio.h>
#include <string.h>

int main() {
	char str[1001];
	int i;
	printf("\nEnter the string: \n");
	gets(str);
	
	int len = strlen(str);
	for (i = 0; i < (len/2); i++) {
		if (str[i] != str[len - i - 1]) {
			printf("Not a palindrome.\n");
			break;
		}
	} 
	
	if (i == (len/2)) {
		printf("It is a palindrome\n");
	}
	return 0;
}
