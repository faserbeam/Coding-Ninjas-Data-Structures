#include <iostream>
using namespace std;

int helper(int input[], int size, int output[][20]) {
	// Base case
	if(size == 0) {
		output[0][0] = 0;
		return 1;
	}

	// Recursion
	int smallOutput = helper(input+1, size-1, output);
	
	for(int i=0; i<smallOutput; i++) {
			
		int col = output[i][0] + 1;

		// Increment the value of first row of the array
		output[smallOutput + i][0] = col;

		// Prepend the first value of input
		output[smallOutput + i][1] = input[0];

		// Loop the rest of the values
		for(int j=2; j<col+1; j++) {
			output[smallOutput + i][j] = output[i][j-1];
		}
	}
	return 2*smallOutput; 

	/* if (size == 0) {
		return 1;
		output[0][0] = 0;
	}

	// Recursion
	int smallOutput = helper(input + 1, size - 1, output);
	
	for (int i = 0; i < smallOutput; i++) {
		
		int col = output[i][0] + 1;

		// Increment the size of sub array
		output[smallOutput + i][0] = col;

		// Add the first value of sub array 
		output[smallOutput + i][1] = input[0];

		// Loop through the entire loop from second element of sub array
		for (int j = 2; j < col + 1; j++) {
			output[smallOutput + i][j] = output[i][j-1];
		}
	}
	return 2 * smallOutput; */
}


void printSubsetsOfArray(int input[], int size) {
	// Write your code here
	int output[35000][20];

	int outputSize = helper(input, size, output);

	/* for(int i=0; i<outputSize; i++) {
		for(int j=1; j<output[i][0]; j++) {
			cout << output[i][j] << endl;
		}
		cout << endl;
	} */

	for( int i = 0; i < outputSize; i++) { 
		for( int j = 1; j <= output[i][0]; j++) { 
			cout << output[i][j] << " ";
	    }
    cout << endl;
  	}
}

int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}
