#include<bits/stdc++.h>

using namespace std;
void selection_sort(int a[], int n) {

	//selection sort
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;

			}
		}
	}

  cout << "After selection sort: " << "\n";
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << "\n";

}
int main() {
  int arr[] = {13,46,24,52,20,9};
  int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Before selection sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  selection_sort(arr, n);
  return 0;
}