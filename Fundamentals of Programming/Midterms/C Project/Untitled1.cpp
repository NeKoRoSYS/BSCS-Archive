#include <stdio.h>
#include <iostream>

int main(){
	std::cout << "Hello, World!" << std::endl;
	int x;
	int y;
	std::cout << "Enter value of x: ";
	std::cin >> x;
	std::cout << "Enter value of y: ";
	std::cin >> y;
	int sum = x + y;
	std::cout << "The sum of x and y is:" << std::endl;
	std::cout << sum << std::endl;
	
	if (sum == 67) {
		std::cout << "SIX SEVEEEEN!!!!";
	}
	return 0;
}
