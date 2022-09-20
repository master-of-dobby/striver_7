//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
//long long sum=0;

class Solution {
  public:
    long long sum=0;
    long long sumOfSeries(long long n) {
        // code here
        /*if(n == 0)
            return sum;
        
        sumOfSeries(n-1);
        
        sum += pow(n, 3);
        

        return sum;
        */

       return (n*n)*(n+1)*(n+1)/4;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
// } Driver Code Ends
