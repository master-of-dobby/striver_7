//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int a[], int b[], int m, int n)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> res;
    int i=0,j=0;

    while(i < m && j < n){

        if(a[i] <= b[j]){
            while(res.size() == 0 || res.back() != a[i])
                res.push_back(a[i]);
            i++;
        }
        else{
            while(res.size() == 0 || res.back() != b[j])
                res.push_back(b[j]);
            j++;

        }
    }

    while(i < m){
        if(res.back() != a[i])
            res.push_back(a[i]);
        i++;
    }

    while(j < n){
        if(res.back() != b[j])
            res.push_back(b[j]);
        j++;
    }
    

    return res;

        
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
