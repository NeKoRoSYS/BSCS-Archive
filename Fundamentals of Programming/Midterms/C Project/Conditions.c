#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

int main () {
	char name[100];
	
	printf("What is your name? ");
	scanf("%s", &name);
	
	if (strlen(name) > 50) printf("Name is too long!\n");
	
	if (strcmp(name, "Rene") == 0) printf("HOLY SHIT SI RENE BATERBONIA!!!\n");
	else if (strcmp(name, "Gaster") == 0) printf("Interesting.\n");
	else if (strcmp(name, "Chara") == 0) printf("The true name.\n");
	else if (strcmp(name, "Flowey") == 0) printf("Your best friend!\n");
	else if (strcmp(name, "sans") == 0) printf("nope.\n");
	else if (strcmp(name, "Papyru") == 0) printf("I'll allow it!\n");
	else if (strcmp(name, "Toriel") == 0) printf("My child, you should pick your own name.\n");
	else if (strcmp(name, "Undyne") == 0) printf("Get your own name, PUNK!!!\n");
	else if (strcmp(name, "Alphys") == 0) printf("P-please don't use my name...\n");
	else printf("Your name is %s\n", name);
	
	int foo;
	int bar;
	printf("Set value of foo: ");
	scanf("%d", &foo);
	printf("Set value of bar: ");
	scanf("%d", &bar);
	printf(
		foo == 6 && bar == 7 ? "SIX SEVEEEEENNN!!!\n" :
		foo < bar ? "foo is less than bar\n" :
		foo == bar ? "foo is equal to bar\n" :
		"foo is greater than bar\n"
	);
		
	printf("%d", main());
	return 0;
}
