//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& a,int n, int p)
    { 
        // code here
        /*map<int, int> m;

        for(int i=1; i<=p; i++)
            m[i];

        for(int i=0; i<n; i++)
            m[a[i]]++;*/
        
        //vector<int> res(n, 0);
        // code
        vector<int> res(n, 0);

        for(int i=0; i<n; i++)
            if(a[i] <= n)
                res[a[i]-1]++;
        
        a = res;
        
        
        
        //a = res;

        
        

    }
};


//{ Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}





// } Driver Code Ends
