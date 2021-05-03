#include <iostream>
using namespace std;

int helper(int input[], int element, int start, int end) {
	// Base case
	if(start <= end) {
		int mid = (start+end)/2;

		if(input[mid] == element) {
			return mid;
		}

		if(element < input[mid]) {
			return helper(input, element, start, mid-1);
		} else {
			return helper(input, element, mid+1, end);
		}
	}

	return -1;
}

// input - input array
// size - length of input array
// element - value to be searched
int binarySearch(int input[], int size, int element) {
    // Write your code here
	
	// Base case
	/* if(size <= 1) {
		return -1;
	}	
	
	// Check the mid element
	int midIndex = size/2;
	int mid = input[midIndex];
	int index = 0;
	if(element <= mid) {
		//cout << "First >>> MidIndex: " << midIndex << " element: " << element << endl;
		index = binarySearch(input, midIndex, element);
	} else {
		//cout << "MidIndex: " << midIndex << " element: " << element << endl;
		index = binarySearch(input+midIndex, size-midIndex, element);
	}
	
	if(mid == element) {
		return index;
	} */
	return helper(input, element, 0, size-1);
}

int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
