#include <bits/stdc++.h>
using namespace std  ;

class Solution {
public:
	void mergeSort(int arr[], int l, int r){
		if(l < r){
			int mid = (l+r)/2;
			mergeSort(arr, l, mid);
			mergeSort(arr, mid+1, r);
			merge(arr, l, mid, r);
		}
	}


    void merge(int a[], int left, int mid, int right){
		
		int h = left;
		int j = mid+1;
		int k = left;

		int b[100000];

		while((h <= mid) && (j <= right)){
			if(a[h] < a[j]){
				b[k] = a[h];
				h++;
			}

			else{
				b[k] = a[j];
				j++;
			}
			k++;
		}

		if(h > mid){
			while(j <= right)
				b[k++] = a[j++];
		}

		else{
			while(h <= mid)
				b[k++] = a[h++];
		}

		for(int p=left; p<=right; p++)
			a[p] = b[p];

		
    }
    

};
int main() {

    int arr[] = {9, 4, 7, 6, 3, 1, 5}  ;
    int n = 7;

    Solution obj ;
    cout << "Before Sorting Array: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout<<endl;
    obj.mergeSort(arr, 0, n - 1);
    cout << "After Sorting Array: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    return 0 ;
}