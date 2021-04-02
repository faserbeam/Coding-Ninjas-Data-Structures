#include <iostream>
using namespace std;

void func(int x) {
	cout << x << endl;
	cout << x << endl;
}

int main() {
	int x = 10;
	func(x++);

	cout << x << endl;
}
