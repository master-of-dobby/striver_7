//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        

        if(n == 2){
            if(array[0] == n)
                return array[0]-1;
            else
                return array[0]+1;
        }

        sort(array.begin(), array.end());
        int k = 1;

        for(int i=0; i<n; i++){
            if(array[i] != k)
                return k;
            k++;
        }
        return array[n-1];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends
