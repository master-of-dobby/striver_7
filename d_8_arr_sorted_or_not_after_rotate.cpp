//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool check(vector<int>& a){
        bool check=true;
        int n = a.size();
        vector<int> b(n, 0);
        
        for(int i=0; i<n-1; i++)
            if(a[i] > a[i+1])
                check = false;
        
        for(int i=1; i<n; i++){
            for(int j=0; j<n; j++)
                b[j] = a[(j+i) % n];
            
            //for(int i=0; i<n; i++)
              //  cout << b[i] << " ";
            //cout << endl;
                
            
            for(int i=0; i<n-1; i++){
                if(b[i] > b[i+1])
                    break;
                if(b[i] <= b[i+1] && i == n-2)
                    return true;
            }
        }
        
        
        return check;
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<int> v(arr, arr+n);
        Solution ob;
        bool ans = ob.check(v);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
