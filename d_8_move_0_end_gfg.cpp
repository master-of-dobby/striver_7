//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int a[], int n) {
	    // code here
	    if(n <= 1)
	        return;
	    
	    int k=0;
	    
	    while(k < n){
	        if(a[k] == 0)
	            break;
	            
	       else
	            k++;
	    }
	    
	    int i = k, j = k+1;
	    
	    while(i < n && j < n){
	        if(a[j] != 0){
	            int temp = a[i];
	            a[i] = a[j];
	            a[j] = temp;
	            
	            i++;
 	        }
 	        j++;
	    }
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
