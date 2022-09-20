#include <iostream>
using namespace std;

void reverse(int a[], int n){
    
    int low = 0;
    int high = n-1;
    int temp;
    
    while(low < high){
        temp = a[low];
        a[low] = a[high];
        a[high] = temp;
        low++;
        high--;
    }
}

void r(int a[], int n){

    if(n == 0)
        return;
    
    cout << a[n-1] << " ";

    r(a, n-1);
}


int main() {
	//code
	
	int t;
	
	cin >> t;

	while(t--){
	    int n;
	    cin >> n;
	    int a[n];

        for(int i=0; i<n; i++)
	        cin >> a[i];
	 
	    //reverse(a, n);
        r(a, n);
	    
	    for(int i=0; i<n; i++)
	        cout << a[i] << " ";
	    
	    cout << endl;
	}
	    
	return 0;
	
}
