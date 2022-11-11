#include<bits/stdc++.h>

using namespace std;
void bubble_sort(int a[], int n) {

	//bubble sort
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1-i; j++){
			if(a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	

  cout << "After bubble sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << "\n";

}
int main() {
  int arr[] = {13,46,24,52,20,9};
  int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Before bubble sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  bubble_sort(arr, n);
  return 0;
}