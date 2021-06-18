#include <iostream>
using namespace std;

/* void rotate(int *input, int d, int n)
{
    //Write your code here
	while(d--) {
		int temp = input[0]; 
		for(int i=1; i<n; i++) {
			input[i-1] = input[i];
		}

		input[n-1] = temp;
	}
} */

void rotate(int *input, int d, int n) {
	int temp[d];
	for(int i=0; i<d; i++) {
		temp[i] = input[i];
		//cout << temp[i] << "->";
	}

	//cout << endl;
	
	int count = 0;
	for(int i=d; i<n; i++) {
		input[count] = input[i];
		//cout << input[i] << "->";
		count++;
	}
	
	//cout << endl;
	for(int i=0; i<d; i++) {
		input[i+count] = temp[i];	
	}
}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}
