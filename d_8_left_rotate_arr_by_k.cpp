//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	   if (n <= 1)
	    return;
	   
	   if(k<1)
	    return;
	   

	   
	   /*for(int i=0; i<k; i++){
	       int t = a[0];
	       
	       for(int p=0; p<n-1; p++)
	           a[p] = a[p+1];
	       
	       a[n-1] = t;
	   }
	   
	   vector<int> v;
	   
	   for(int i=0; i<k && i<=n ; i++){
	        v.push_back(a[i]);
	        a[i] = 0;
	   }
	   
	   int p=k;
	   for(int i=0; i<n; i++){
	       a[i] = a[p++];
	   }
	   
	   int m=0;
	   
	   for(int i=n-k; i<n-1; i++)
	        a[i] = v[m++];
	        
	   
    k%=n;
    reverse(arr, arr+k);
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;

    reverse(arr+k, arr+n);
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;


    reverse(arr, arr+n);
   for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;*/

    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
    reverse(arr, arr+n);


	   
	} 
		 

};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}



// } Driver Code Ends
