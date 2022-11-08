#include<iostream>

using namespace std;

void printLeadersBruteForce(int arr[], int n) {

	int i=0,j=0;

	/*

	for(i = n-2; i >=0; i--){
		for(j = i+1; j < n; j++){
			if(arr[i] > arr[j])
			    ;
			else
				break;
		}

		if(j == n-1)
			cout << arr[i] << " ";

	}*/

	for(i = 0; i < n-1; i++){
		bool leader = true;

		for(j = i+1; j<n; j++){
			if(arr[i] < arr[j]){
				leader = false;
				break;
			}

		}
		if(leader)
			cout << arr[i] << " ";
	}

	cout << arr[n-1] << endl;
  
}

int main() {

  int arr1[] = {4, 7, 1, 0};
  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  cout << "The leaders of the first array are: " << endl;
  printLeadersBruteForce(arr1, n1);

  int arr2[] = {10, 22, 12, 3, 0, 6};
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  cout << "The leaders of the second array are: " << endl;
  printLeadersBruteForce(arr2, n2);

  return 0;
}