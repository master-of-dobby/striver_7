#include<bits/stdc++.h>
using namespace std;

int binary_search(int a[], int l, int h, int k, int n){

	if(l >= h)
		return -1;


	int mid = (l+h)/2;

	if(a[mid] == k)
		return mid+1;
	else if(a[mid] > k)
		return binary_search(a, l, mid-1, k, n);
	else
		return binary_search(a, mid+1, h, k, n);
	
	return -1;

}

int main() {
   	int a[]= {2,3,7,10,13,14,17};
    int k = 14;
	int n = sizeof(a)/sizeof(int);

	int flag = binary_search(a, 0, n-1, 13, n);

	if(flag == -1)
		cout << "NOTfound!" << endl;
	else
		cout << "Element Found at " << flag << endl;



	
      
}
