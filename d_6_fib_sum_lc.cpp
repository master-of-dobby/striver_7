//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution {
public:
    
    long long fib(int n) {
        if(n == 0)
            return 0;
        
        if(n == 1 )
            return 1;
        
        return fib(n-1)+fib(n-2);
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;

        cout << obj.fib(n) << endl;
    }
	return 0;
}

// } Driver Code Ends
