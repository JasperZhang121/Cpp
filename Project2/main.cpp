#include <iostream>
#include "multiply.h"

#include <vector>
#include<algorithm>
#include <string>
#include <deque>
#include <stack>
#include <queue>
#include <list>
#include <set>

using namespace std;

/// Class ---------------------------------------------------------------------------------------------------------

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

	//virtual void speak() = 0;
};

class thi : public object {

public:
	
	void vir() {
		std::cout << "get vir" << std::endl;
	}

	//virtual void speak() override {
	//	printf("say something!");
	//}
};

class human {
public:
	static int age;
	human () {}
	static void say() {
		std::cout << "say!" << std::endl;
	}
};



// Struct ---------------------------------------------------------------------------------------------------------

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

// enum ---------------------------------------------------------------------------------------------------------

enum letters {
	A,B,C
};


// methods ---------------------------------------------------------------------------------------------------------
int multiply(int a, int b) {
	return a * b;
}

void multiOut(int a, int b) {
	std::cout << multiply(a, b) << std::endl;
}

void increase(int& a) {
	a++;
}

void increas(int a) {
	a++;
}

void duplicate() {
}

int human::age = 1;

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

	
	human h1;
	human h2;
	h1.age = 10;
	h2.age = 3;
	printf("here: \n");
	std::cout << h1.age << h2.age<< std::endl;
	h1.say();
	human::say();

	printf("--------------------------------------------------------------------------------- stl starts\n");


	vector<int> v;
	v.push_back(10); // insert numbers into vector
	v.push_back(20);
	v.push_back(30);
	v.push_back(10);

	// visit data in vector by iterator

	vector<int>::iterator itBegin = v.begin(); // first elem
	vector<int>::iterator itEnd = v.end(); // next elem to the last elem
	while (itBegin != itEnd) {
		cout << *itBegin << endl;
		itBegin++;
	}

	// visit by for loop1
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}

	// visit by index
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	printf("--------------- vector ends\n");


	// construct string
	string s1; // 1 

	const char* str = "hello there~";
	string s2(str); // 2
	cout<<s2 <<endl;

	string s3(s2); //3
	cout << s3 << endl;

	string s4(10, 'a'); //4
	cout << s4 << endl; 

	// concatenate
	string s5 = s3 += s2;
	cout << s5 << endl;
	string s6 = s3.append(s2);
	cout << s6 << endl;
	// find
	int pos = s2.find("el");
	cout << pos << endl;
	// replace
	s5.replace(0,3,"111");
	cout << s5 << endl;
	// compare
	cout << s1.compare(s2) << endl;
	// visit and modify
	cout << s2[0] << endl;
	s2[0] = 'x';
	cout << s2[0] << endl;
	// insert
	s2.insert(1, "1111");
	cout << s2 << endl;
	// erase
	s2.erase(1, 3);
	cout << s2 << endl;
	// sub
	string s7 = s2.substr(1,3);
	cout << s7 << endl;
	printf("--------------- string ends\n");


	deque<int> d1; 
	d1.push_back(111);
	d1.push_front(222);
	d1.push_back(333);
	d1.push_front(444);
	for (int i = 0; i < d1.size();i++)
		cout << d1[i] << endl;
	cout << " " << endl;
	sort(d1.begin(), d1.end());
	for (int i = 0; i < d1.size();i++)
		cout << d1[i] << endl;
	cout << " " << endl;
	d1.pop_front();
	d1.pop_back();
	for (int i = 0; i < d1.size();i++)
		cout << d1[i] << endl;
	printf("--------------- deque ends\n");


	stack<int> st1;
	st1.push(1);
	st1.push(2);
	st1.push(3);
	while (!st1.empty()) {
		cout << st1.top() << endl;
		st1.pop();
	}
	printf("--------------- deque ends\n");


	queue<int> q1;
	q1.push(1);
	q1.push(2);
	q1.push(3);
	q1.push(4);
	
	while (!q1.empty()) {
		cout << "front: " << q1.front() << " back " << q1.back() << endl;
		q1.pop();
	}
	printf("--------------- queue ends\n");

	list<int> ls1;
	ls1.push_back(1);
	ls1.push_back(2);
	list<int> ls2(ls1.begin(),ls1.end());
	for (list<int>::const_iterator it = ls2.begin(); it != ls2.end(); it++ ) {
		cout << *it << endl;
	}
	list<int>::iterator it = ls2.begin();
	ls2.insert(++it,100);
	ls2.erase(it);
	cout << ls2.front() << endl;
	cout << ls2.back() << endl;
	ls2.reverse();
	ls2.sort();
	printf("--------------- list ends\n");

	set<int> stt1;
	stt1.insert(11);
	stt1.insert(13);
	stt1.insert(13);
	set<int> stt2(stt1);
	stt1.erase(11);
	stt1.clear();

	set<int>::iterator poss = stt2.find(11);
	if (poss != stt2.end())
		cout << "found" << endl;
	
	cout << stt2.count(13) << endl;

	printf("--------------- set ends\n");

}