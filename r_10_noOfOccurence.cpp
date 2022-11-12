//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int a[], int n, int x) {
	    /*
	    // code here
	    int low = 0;
	    int high = n-1;
	    int count=0;
	    int first = -1;
	    
	    while(low <= high){
	        int mid = high + (low - high)/2;
	        
	        if(a[mid] == x){
	            first = mid;
	            high = mid-1;
	        }
	        else if(a[mid] > x)
	            high = mid-1;
	        else
	            low = mid+1;
	    }
	    
	    int last = -1;
	    low = 0;
	    high = n-1;
	    
	    while(low <= high){
	        int mid = high +(low-high)/2;
	        
	        if(a[mid] == x){
	            last = mid;
	            low = mid+1;
	        }
	        else if(a[mid] > x)
	            high = mid-1;
	        else
	            low = mid+1;
	    }
	    if((last == -1) && (first == -1))
	        return 0;
	       
	    
	    return last-first+1;*/
	    
	    int count = 0;
	    
	    for(int i=0; i<n; i++)
	        if(a[i] == x)
	            count++;
	   
	   return count;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends