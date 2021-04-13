#include<iostream>

using namespace std;

bool is_sorted(int arr[], int size) {
	if(size == 0 || size == 1)
		return true;
	
	if(arr[0] > arr[1])
		return false;

	bool sorted = is_sorted(arr + 1, size - 1);
	return sorted;	
}

int main() {
	int arr[] = {1, 2, 100, 4, 5};
	int size = 5;
	cout << is_sorted(arr, size);
}
