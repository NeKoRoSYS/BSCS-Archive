#include <stdio.h>
#include <math.h>

int main () {
	float b1, b2, h, area;
	
	printf("Trapezoid Area Calculator\n");
	
	printf("Set value of base 1: ");
	scanf("%f", &b1);
	
	printf("Set value of base 2: ");
	scanf("%f", &b2);
	
	printf("Set value of height: ");
	scanf("%f", &h);
	
	area = ((b1 + b2) * h) * 0.5f;
	
	printf("The area of the trapezoid is: %.2f", area);
	return 0;
}
