//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){

    if(n==0 or n==1)
        return "Yes";

    string p = to_string(n);
    int size = p.length();
    //cout << size;

    int m=n;
    int s=0;
    int k=0;

    while(m){
        k = m % 10;
        s += pow(k, size);
        m = m/10;
    }

    if(n == s)
        return "Yes";
    else
        return "No";



}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
