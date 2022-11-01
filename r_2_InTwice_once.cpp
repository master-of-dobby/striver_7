//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int a[], int n){
	    //code

        /*map<int, int> m;

        for(int i=0; i<n; i++)
            m[a[i]]++;
        
        for(auto it = m.begin(); it != m.end(); it++)
            if(it->second == 1)
                return it->first;

        return 0;*/
        
        if(n == 1)
            return a[0];
        
        for(int i=0; i<n-1; i++){
            if(a[n-1] != a[n-2])
                return a[n-1];
                
            if(a[i] == a[i+1]){
                i++;
                continue;
            }
            else
                return a[i];
        }
        
        
        
        


	    
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends