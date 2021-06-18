#include<iostream>
#include<stdio.h>
#include<cstring>

using namespace std;

class Student {
	int age;

	public:
	
	char *name;

	Student(int age, char *name) {
		// Shallow Copy
		this->age = age;
		
		// Deep Copy
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		
		// Shallow Copy
		//this->name = name;

	}

	Student(Student const &s) {
		this->age = s.age;

		this->name = new char[strlen(s.name) + 1];
		strcpy(this->name, s.name);
	}

	void display() {
		cout << this->age << " " << this->name << endl;
	}
};

int main() {
	char name[] = "abcd";
	Student s1(20, name);
	s1.display();

	Student s2(s1);
	s2.name[0] = 'x';
	s1.display();
	s2.display();
}
