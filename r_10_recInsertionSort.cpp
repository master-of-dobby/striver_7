#include<bits/stdc++.h>
using namespace std;


void insertion_sort(int a[], int n){

	/*for(int i=1; i<n; i++){
		int temp = a[i];
		int j = i-1;

		while((j >= 0) && (a[j] > temp)){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
	}*/

	if(n <= 1)
		return;
	
	insertion_sort(a, n-1);

	int last = a[n-1];
	int j = n-2;

	while((j >= 0) && (a[j] > last)){
		a[j+1] = a[j];
		j--;
	}

	a[j+1] = last;	


}







int main(){
	int a[] = {5,4,3,2,1};
	
	insertion_sort(a, 5);

	for(int i=0; i<5; i++)
		cout << a[i] << " ";
}