#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main () {
	int age;
	bool check;
	printf("Enter age: ");
	scanf("%d", &age);
	printf("Your age is %d\n", age);
	check = age >= 18;
	printf(check ? "Liquor is allowed." : "Liquor is not allowed!");
	return 0;
}
