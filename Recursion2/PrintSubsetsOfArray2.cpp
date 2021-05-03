#include <iostream>
using namespace std;

void helper(int input[], int start, int size, int output[], int m) {
	// Base case
	if(start == size) {
		// Print all the values under output array
		for(int i=0; i<m; i++) {
			cout << output[i] << " ";
		}
		cout << endl;
		return;
	}
	
	// Recursion for values which doesn't include first value as subset
	helper(input, start+1, size, output, m);

	int smallOutput[100];
	int i;
	for(i = 0; i<m; i++) {
		smallOutput[i] = output[i];
		cout << output[i] << endl;
	}

	smallOutput[i] = input[start];


	// Recursion for values which includes first value as subset
	helper(input, start+1, size, smallOutput, m+1);
}

void printSubsetsOfArray(int input[], int size) {
	// Write your code here
	int output[1000];
	return helper(input, 0, size, output, 0);
}

int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}

