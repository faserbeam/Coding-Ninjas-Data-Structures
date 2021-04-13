// This is not a part of Recursion2 series.
// But the logic is a part of merge sort.

#include<iostream>
#define SOA(x) sizeof(x)/sizeof(x[0])
using namespace std;

void merge(int arr[], int arr1[], int size1, int size2) {
	int i=0, j=0, k=0;
	int fin[size1+size2];

	while(i < size1 && j < size2) {
		if(arr[i] < arr1[j]) {
			fin[k] = arr[i];
			k++;
			i++;
		} else {
			fin[k] = arr1[j];
			k++;
			j++;
		}
	}

	while(i < size1) {
		fin[k] = arr[i];
		k++;
		i++;
	}

	while(j < size2) {
		fin[k] = arr1[j];
		k++;
		j++;
	}
	
	for(int x: fin) {
		cout << x << " < ";
	}
}

int main() {
	int arr[] = {1, 3, 5, 7};
	int arr1[] = {2, 4};
	merge(arr, arr1, 4, 2);
}
