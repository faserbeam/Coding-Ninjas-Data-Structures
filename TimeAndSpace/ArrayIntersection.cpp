#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

/* void merge(int arr[],int si,int ei){
    int i = si;
    int mid = (si+ei)/2;
    int j = mid+1;
    int temp[ei-si+1];
    int k = 0;
    while(i<=mid && j<=ei){
        if(arr[i]>arr[j]){
            temp[k] = arr[j];
            j++;
        }
        else{
            temp[k] = arr[i];
            i++;
        }
        k++;
    }
    while(i<=mid){
        temp[k] = arr[i];
        i++;
        k++;
    }
    while(j<=ei){
        temp[k] = arr[j];
        j++;
        k++;
    }
    int l = 0;
    for(int i = si;i<=ei;i++){
        arr[i] = temp[l];
        l++;
    }
}
void merge_sort(int arr[], int si , int ei){
    if(si>=ei){
        return;
    }
    int mid = (si+ei)/2;
    merge_sort(arr,si,mid);
    merge_sort(arr,mid+1,ei);
    merge(arr,si,ei);
}
void mergeSort(int arr[],int size){
    if(size == 0){
        return;
    }
    int si = 0;
    int ei = size -1;
    merge_sort(arr,si,ei);
}
void intersection(int input1[], int input2[], int size1, int size2) {
    mergeSort(input1,size1);
    mergeSort(input2,size2);
   int i =0;
    int j =0;
    while(i<size1 && j<size2){
        if(input1[i] == input2[j]){
            cout<< "Element : " << input1[i]<<endl;
            i++;
            j++;
        }
        else if(input1[i]>input2[j]){
            j++;
        }
        else
            i++;
    }
} */

// Using maps
void intersection(int input1[], int input2[], int size1, int size2) {

	// Create an unordered map to insert all the elements from input1
	// Check all the elements from input2 if they are present in the map
	// If they are output the value and decrement the value 
	// If they are not proceed to the next element of input2
	unordered_map<int, int> umap;

	for(int i=0; i<size1; i++) {
		if(umap.find(input1[i]) == umap.end()) {
			// Add the value in the map
			umap.insert(make_pair(input1[i], 1));
		} else {
			// If the value already exist
			umap[input1[i]]++;
		}
	}

	// Compare the intersection from input2
	
	for(int i=0; i<size2; i++) {
		if(umap.find(input2[i]) == umap.end()) {
			continue;
		} else if(umap.find(input2[i]) != umap.end() && umap[input2[i]] != 0) {
			//cout << "Output: " << input2[i] << " ";
			cout << input2[i] << " ";
			umap[input2[i]]--;
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size1, size2;

		cin >> size1;
		int *input1 = new int[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> input1[i];
		}

		cin >> size2;
		int *input2 = new int[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> input2[i];
		}

		intersection(input1, input2, size1, size2);
		
		delete[] input1;
		delete[] input2;
		
		cout << endl;
	}

	return 0;
}
