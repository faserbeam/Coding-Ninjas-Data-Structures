#include<iostream>

using namespace std;

class Student {
	int age;
	const int rollNumber;
	int &x;

	public:

	// Using initialization list to assign the value of memebers during constructor initialization

	Student(int age, int rollNumber) : rollNumber(rollNumber), x(this->age) {

		age = this->age;

		// Cannot use direct allocation as const will assign the value
		// which defaults to "garbage value"
		//
		// rollNumber = this->rollNumber;
	}
};


int main() {
	Student s1(10, 10);
}
