#include<iostream>

using namespace std;



void printLeadersBruteForce(int arr[], int n) {

	int i=0,j=0;
	int max = arr[n-1];
	cout << max << " ";


	for(i = n-2; i >=0; i--){

		if(arr[i] > max){
			cout << arr[i] << " ";
			max = arr[i];
		}

	}

	cout  << endl;
  
}

int main() {

  //int arr1[] = {4, 7, 1, 0};
  int n;
  cin >> n;
  int arr1[n];
  
  for(int i=0; i<n; i++)
    cin >> arr1[i];
  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  cout << "The leaders of the first array are: " << endl;
  printLeadersBruteForce(arr1, n1);

  int arr2[] = {10, 22, 12, 3, 0, 6};
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  cout << "The leaders of the second array are: " << endl;
  printLeadersBruteForce(arr2, n2);

  return 0;
}