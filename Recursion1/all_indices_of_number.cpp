#include<iostream>

using namespace std;

int allIndexes(int input[], int size, int x, int output[]) {
	// Base case
	if(size == 0) {
		return 0;
	}	

	// Returns the size of output array
	int ans = allIndexes(input, size-1, x, output);

	if(input[size-1] == x) {
		output[ans] = size - 1;
		return ans + 1;
	} 

	return ans;
}

int main(){
	int size = 5;
	int input [size] = {9, 8, 10, 10, 10};
	int x = 10;
	int output [size];

	cout << allIndexes(input, size, x, output);
}
