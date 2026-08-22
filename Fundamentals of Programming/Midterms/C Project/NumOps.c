#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

int main () {
	char op[1];
	float x, y;
	printf("--=[ NeCALCULATOR ]=--");
	printf("Select Operation:\n- + (Addition)\n- - (Subtraction)\n- * (Multiplication)\n- / (Division)\n");
	scanf("%s", &op);
	
	printf("Set value for x: ");
	scanf("%f", &x);
	
	printf("Set value for y: ");
	scanf("%f", &y);

	if (x == 0 && y == 0) {
		printf("Error: Zero is filtered out and not allowed!\n");
		return 1;
	}
	
	if(strcmp(op, "+") == 0) {
		printf("%.7f", x + y);
	} else if(strcmp(op, "-") == 0) {
		printf("%.7f", x - y);
	} else if(strcmp(op, "*") == 0) {
		printf("%.7f", x * y);
	} else if(strcmp(op, "/") == 0) {
		printf("%.7f", x / y);
	} else printf("Invalid operator!");
	
	return 0;
}
