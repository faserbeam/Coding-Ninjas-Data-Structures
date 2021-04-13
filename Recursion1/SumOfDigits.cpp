#include <iostream>
using namespace std;


int sumOfDigits(int n) {
    // Write your code here
	// Base case
	if(n < 10) {
		return n;
	}	

	// recursive call
	int ans = sumOfDigits(n/10);

	// final calc
	return ans + (n%10);
}

int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}
