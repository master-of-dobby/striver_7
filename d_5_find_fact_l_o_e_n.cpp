//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<long long> factorialNumbers(long long n)
    {
        // Write Your Code here
        vector<long long> res;
        
        for(long long i=1; i<=n; i++){
            if(factorial(i) > n)
                break;
            
            res.push_back(factorial(i));
        }
        
        return res;
        
    }
    
    long long factorial(long long n){
        if(n == 1 || n == 0)
            return 1;
        
        return n * factorial(n-1);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends
