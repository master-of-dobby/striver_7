//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int a[], int n){
        //complete the function here
        /*int min1 = INT_MAX;
        
        for(int i=0; i<n; i++)
            min1 = min(min1, a[i]);
        return min1; */
        
        int low = 0;
        int high = n-1;
        int min1 = INT_MAX;
        
        while(low <= high){
            
            if (a[low] <= a[high]) {
                min1 = min(min1, a[low]);
                break;
            }
            
            int mid = low + (high - low)/2;

            
           if(a[low] <= a[mid]){
               min1 = min(min1, a[low]);
               low = mid+1;
           }
           else{
               min1 = min(min1, a[mid]);
               high = mid-1;
           }
            
        }
        
        
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends