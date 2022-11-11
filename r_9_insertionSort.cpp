#include<bits/stdc++.h>

using namespace std;
void insertion_sort(int a[], int n) {

	//insertion sort
	for(int i=1; i<n; i++){
		int key = a[i];
		int j = i - 1;

		while( j >= 0 && a[j] > key){
			a[j+1] = a[j];
			j--;
		}

		a[j+1] = key;
		
	}
	

  cout << "After insertion sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << "\n";

}
int main() {
  int arr[] = {13,46,24,52,20,9};
  int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Before insertion sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  insertion_sort(arr, n);
  return 0;
}