#include<iostream>
#define SOA(x) sizeof(x)/sizeof(x[0])
using namespace std;

/* void merge(int arr[], int arr1[], int a, int a1, int ans[]) {
	int count = 0;
	int i=0; int j=0;
	// Traversing both the arrays
	for(i=0, j=0; i<a, j<a1;) {
		if(arr[i] < arr1[j]) {
			ans[count++] = arr[i++];
		} else {
			ans[count++] = arr1[j++];
		}
	}
	// Adding the missing elements of array
	while(i < a) {
		ans[count++] = arr[i++];
	}

	while(j < a1) {
		ans[count++] = arr1[j++];
	}

	for(int i=0; i<SOA(ans); i++) {
		cout << ans[i] << endl;
	}
}*/

void merge(int input1[], int size1, int input2[], int size2, int output[]){
    int i = 0, j = 0, k = 0;
    while(i < size1 && j < size2){ 
        if(input1[i] < input2[j]){
            output[k] = input1[i]; 
            k++;
            i++;
        }
        else{
            output[k] = input2[j]; 
            j++; 
            k++;
        }
    }
    while( i < size1){ 
        output[k] = input1[i];
        k++;
        i++;
    }
    while(j < size2){ 
        output[k] = input2[j];
        j++;
        k++;
    }
}


void mergeSort(int input[], int size){
	// Write your code here
	
	// Base case
	if(size <= 1) {
		return;
	}

	int mid = size / 2;

	int part1[500], part2[500];
	int size1 = mid, size2 = size - mid;

	for(int i=0; i<mid; i++) {
		part1[i] = input[i];
	}
	
	int k = 0;
	for(int i=mid; i<size; i++) {
		part2[k] = input[i];
		k++;
	}

	mergeSort(part1, size1);
	mergeSort(part2, size2);

	cout << size1 << " : " << size2 << endl;

	merge(part1, size1, part2, size2, input);
}

int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}
