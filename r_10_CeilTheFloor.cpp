//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int a[], int n, int x) {
    // code here
    int f = -1;
    int c = INT_MAX;
    int k1=-1;
    int k2=-1;
    pair<int,int> p;
    
    for(int i=0; i<n ;i++){
        if((a[i] <= x) && (f < a[i])){
            f = a[i];
            k1++;
        }   
            
        
        if((a[i] >= x) && (c > a[i])){
            c = a[i];
            k2++;
        }
           
    }
    
    
    
    p.first = f;
    p.second = c;
    
    if(k2 == -1)
        p.second = -1;
    if(k1 == -1)
        p.first = -1;
    
    return p;
    
}