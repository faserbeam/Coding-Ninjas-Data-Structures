#include<iostream>

using namespace std;

int power(int x, int n) {
	
	if(n == 0) {
		return 1;
	}

	if(n == 1){
		return x;
	}

	int smallOutput = power(x, n-1);
	return x * smallOutput;
}

int main() {
	cout << power(2, 5);
}
