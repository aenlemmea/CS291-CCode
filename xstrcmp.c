#include <stdio.h>

int xStrcmp(char* s1, char* s2) {
	while (*s1 != '\0') {
		if (*s1 != *s2) {
			return (*s1 - *s2);
		}
		
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int main() {
	char str1[1001];
	char str2[1001];
	
	printf("\nEnter the first string: \n");
	gets(str1);
	
	printf("\nEnter the second string: \n");
	gets(str2);
	
	if (xStrcmp(str1, str2) != 0) {
		printf("\nNot identical.\n");
	} else {
		printf("\nIdentical\n");
	}
	return 0;
}
