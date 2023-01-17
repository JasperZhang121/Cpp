#include <iostream>
#include "multiply.h"

int multiply(int a, int b) {
	return a * b;
}

void multiOut(int a, int b) {
	std::cout << multiply(a, b) << std::endl;
}

void increase(int& a){
	a++;
}

void increas(int a) {
	a++;
}

void duplicate() {
}



class object {

public:
	int size, weight;

	object() {
	}


	object(int s, int w) {
		size = s;
		weight = w;
	}

	~object() {
		std::cout << "Delete" << std::endl;
	}

	void getFat(int a) {
		weight += a;
	}

	void printInheri() {
		std::cout << "inheritance" << std::endl;
	}

	virtual void vir() {
		std::cout << "vir" << std::endl;
	}

	virtual void speak() = 0;
};

class thi : public object {

public:
	
	void vir() {
		std::cout << "get vir" << std::endl;
	}

	virtual void speak() override {
		printf("say something!");
	}
};


struct stc {
	static int x, y;
	int z;

	static void print() {
		std::cout << x<< "," << y << std::endl;
	}

	//static void printe() {
	//	std::cout << z << std::endl;
	//}
};

int stc::x;
int stc::y;


enum letters {
	A,B,C
};


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
	printf("---------- loop ends\n");

	
	int j = 10;
	void* ptr1 = nullptr; // same as 0
	int* ptr2 = &j; // get the address of int j 
	*ptr2 = 8; // change the value in ptr2 address

	char* buffer = new char[8]; // pointer points to the begining of this 8 bytes memory block
	memset(buffer, 0, 8);
	delete[] buffer;
	char** p3 = &buffer;
	printf("---------- pointer ends\n");


	int& ref = j;
 	ref = 9;
	printf("ref: %d, j: %d \n", ref, j);
	increase(j);
	printf("%d \n", j);
	increas(j);
	printf("%d \n", j);
	printf("---------- ref ends\n");


	object obj1(0,0);
	obj1.size = 10;
	obj1.weight = 10;
	obj1.getFat(10);
	printf("get fat %d \n", obj1.weight);
	printf("---------- class ends\n");


	stc structure1;
	structure1.x = 1;
	structure1.y = 1;

	stc structure2;
	structure2.x = 3;
	structure2.y = 3; 

	structure1.print();
	structure2.print();
	printf("---------- struct ends\n");

	thi thing1;
	thing1.printInheri();
	printf("------------ inheriends\n");

	thing1.vir();

	obj1.speak();
	thing1.speak();



}