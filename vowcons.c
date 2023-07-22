#include <stdio.h>

int main() {
	int i;
	char str[1001];
	printf("\nEnter the string: \n");
	gets(str);
	
	int ccount = 0, vcount = 0, dcount = 0;
	
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			vcount++;
		} else if ((str[i] >= '0') && (str[i] <= '9')) {
			dcount++;
		} else {
			ccount++;
		}
	}
	
	printf("\nVowels Count: %d\n", vcount);
	printf("Digits Count: %d\n", dcount);
	printf("Consonants Count: %d\n", ccount);
}
