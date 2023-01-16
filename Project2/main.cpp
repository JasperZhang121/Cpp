#include <iostream>
#include "multiply.h"

int multiply(int a, int b) {
	return a * b;
}

void multiOut(int a, int b) {
	std::cout << multiply(a, b) << std::endl;
}

int main() {

	int a = 100; // signed integer,  around -2b -> 2b due to 4 bytes limit, 2^(4*8-1)
	unsigned int b = 100;
	char ch = 'a';
	float c = 3.14159f;
	double d = 3.141589798324234;
	bool e = false;
	std::cout << sizeof(ch) << std::endl;
	printf("-------------variable ends \n");

	std::cout << multiply(3, 4) << std::endl;
	multiOut(3, 4);
	std::cout << mul(3,4) << std::endl;

	printf("-------------func ends \n");

	int f = 100;
	bool g = f == 100;
	std::cout << g << std::endl;
	if (g) {
		printf("true \n");
	}

	if (5) {
		printf("true \n");
	}

	int *ptr = nullptr;

	if (ptr) {
		printf("true \n");
	}
	else
	{
		printf("null pointer\n");

	}
	printf("------------ if ends \n");


	for (int i = 0; i < 5; i++) {
		printf("loop %d \n", i);
	}
	int i = 0;
	bool condition = true;
	for (; condition; ) {
		printf("loop %d \n", i);
		i++;
		if (i == 5)
			condition = false;
	}

	i = 0;
	while (i<5)
	{
		printf("i<5 \n");
		i++;
	}
	do {
		printf("i>0 \n");
		i--;
	} while (i > 0);
	printf("---------- loop ends");




}