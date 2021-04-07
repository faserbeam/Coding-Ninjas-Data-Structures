#include <iostream>
using namespace std;

int countZeros(int n) {
	// Base case
	
	if(n == 0) {
		return 1;
	}

	if(n < 10) {
		return 0;
	}

	// recursion
	// 1100:	0
	// 110:		1
	// 11:		2
	// 1:		2
	int ans = countZeros(n/10);

	if(n%10 == 0){
		return ans+1;
	} 
	return ans;
}

int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
