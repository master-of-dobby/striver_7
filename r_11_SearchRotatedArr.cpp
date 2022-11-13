//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int a[], int l, int h, int key){

        int n = a.size();

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
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends