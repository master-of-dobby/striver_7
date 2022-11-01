//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > a, int n, int m) {
	    // code here
	    
	    int c=0,max_c=0,r=0;
	    for(int i=0; i<n; i++){
	        c=0;
	        for(int j=0; j<m; j++)
	            if(a[i][j] == 1)
	                c++;
	                
	        if(max_c < c){
	            r = i;
	            max_c = c;
	        }
	           
	    }
	    
	    if(max_c == 0)
	        return -1;
	    
	    return r;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends