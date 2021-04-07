#include<iostream>

using namespace std;


int multiplyNumbers(int m, int n) {
    // Write your code here
	
	// Base Case
	if(n == 0) {
		return 0;
	}

	int ans = multiplyNumbers(m, n-1);

	return ans + m;
}

int main(){
	int m = 10;
	int n = 5;
	cout << multiplyNumbers(m, n);
}
