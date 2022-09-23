//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        
        if(k < 1)
            return;
        
        if(n <= 1)
            return;
        
        vector<int> v(n, 0);
        
         k = k % n;
        
        if(k == 1){
            int temp = nums[n-1];
            vector<int> t(n, 0);
            
            for(int i=0; i<n-1; i++)
                t[i+1] = nums[i];
            
            t[0] = temp; 
            nums = t;
            
            return;
            
        }
        
       
        for(int i=0; i<n; i++)
            v[(i+k)%n] = nums[i];
        
        nums = v;
        
        /*vector<int> v(n, 0);
        
        k = k % n;
        
        if(k == 1){
            
        for(int i=0; i<n; i++)
            v[i] = nums[(i+k) % n];
        
        for(int i=0; i<n; i++)
            nums[i] = v[i];*/
        
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
