#include <stdio.h>

void xStrcat(char* s1, char* s2) {
	while (*s1 != '\0') {
		s1++;
	}
	
	*s1 = ' ';
	s1++;
	
	while(*s2 != '\0') {
		*s1 = *s2;
		s1++;
		s2++;
	}
	s1 = '\0';
}

int main() {
	char str1[1001];
	char str2[1001];
	
	printf("\nEnter the first string: \n");
	gets(str1);
	
	printf("\nEnter the second string: \n");
	gets(str2);
	
	xStrcat(str1, str2);
	printf("\nThe cocatenated string is: %s\n", str1);
	
}
