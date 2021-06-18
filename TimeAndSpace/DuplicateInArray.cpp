#include <iostream>
using namespace std;

/* int findDuplicate(int *arr, int n)
{
	int res = 0;
    //Write your code here
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(arr[i] == arr[j]) {
				res = arr[i];
				return res;
			}
		}	
	}

	return -1;
}*/

int findDuplicate(int *arr, int n) {
	int total = 0;
	
	for(int i=0; i<n; i++) {
		total += arr[i];
	}

	int sumOf = ((n-1)*(n-2))/2;

	return total - sumOf;
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findDuplicate(input, size) << endl;
	}

	return 0;
}
