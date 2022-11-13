//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool Search(int n, vector<int> &a, int key) {
		
        int low = 0;
        int high =n-1;
        
        
        while(low <= high){
            int mid = low + (high - low)/2;
            //int mid = (high+low)/2;
          
            
            if(a[mid] == key)
                return 1;
            
              
            if((a[low] == a[mid]) && (a[high] == a[mid]))
            {
                low++;
                high--;
            }
            
            else if((a[low] <= a[mid]))
                if((a[low] <= key) && (a[mid] > key))
                    high = mid-1;
                else
                    low = mid+1;
            else
                if((a[mid] < key) && (a[high] >= key))
                    low = mid+1;
                else
                    high = mid-1;
            
        }
 
        return 0;
    
    
    }
};
//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int key;
        cin >> key;

        Solution obj;
        cout << obj.Search(n, a, key) << "\n";
    }
    return 0;
}
// } Driver Code Ends