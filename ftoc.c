#include <stdio.h>

int main(void) {
   float faren;
   printf("\nEnter the temperature in farenheit: ");
   scanf("%f", &faren);
   printf("The temperature in celcius is %0.2f\n", ((5 * (faren - 32))/9));
}
