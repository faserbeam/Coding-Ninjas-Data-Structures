#include<iostream>

using namespace std;

int fact(int n) {
	// base case
	// for 0! return 1
	if(n == 0)
		return 1;

	int smallOutput = fact(n-1);
	return n * smallOutput;
}


int main() {
	int n = 0;
	cin >> n;
	cout << fact(n);
}
