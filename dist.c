#include <stdio.h>
#include <math.h>

int main() {
    float x1, x2, y1, y2, d;
    printf("\nEnter the two co-ordinates: ");
    scanf("%f %f %f %f", &x1, &x2, &y1, &y2);
    d = sqrt((pow((x1 - x2),2) + pow((y1-y2), 2))); 
    printf("\nThe distance between the two points is: %0.3f\n", d);
    return 0;
}
