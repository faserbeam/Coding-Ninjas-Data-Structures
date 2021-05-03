#include<iostream>
using namespace std;

int partition(int input[], int si, int ei) {

	// Find the partition	
	int part = 0;

	// Set the pivot
	int pivot = input[si];

	// Check the elements which are less than pivot (in this case the first index)
	for(int i=si+1; i<=ei; i++) {
		if(input[i] <= pivot) {
			part++;
		}
	}
	
	// We create pivotIndex to keep the track of our pivot.
	int pivotIndex = si+part;

	// Swap the first index with pivotIndex to place the pivotIndex in right location.
	int temp = input[si];
	input[si] = input[pivotIndex];
	input[pivotIndex] = temp;

	// Keep all smaller elements to left and all larger elements to the right
	int i=si, j=ei;
	while(i < pivotIndex && j > pivotIndex) {
		while(input[i] <= input[pivotIndex]) {
			i++;
		}
		while(input[j] > input[pivotIndex]) {
			j--;
		}
		
		if(i < pivotIndex && j > pivotIndex){
			int temp1 = input[i];
			input[i] = input[j];
			input[j] = temp1;
			i++;
			j--;
		}
	}

	return pivotIndex; 
}

void qs(int input[], int si, int ei) {
	
	if(si >= ei) {
		return;
	}

	int pivotIndex = partition(input, si, ei);
	
	// Perform quick sort on the first half of the index
	qs(input, si, pivotIndex-1);

	// Perform quick sort on the second half of the index
	qs(input, pivotIndex+1, ei);
}

void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */

	qs(input, 0, size-1);
}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}


