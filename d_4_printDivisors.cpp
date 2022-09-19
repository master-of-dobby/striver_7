//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    string primeOrNot(int n){
        int count = 0;

        for(int i=1; i<=n; i++)
            if(n % i == 0)
                count++;
            
        if(count > 2)
            return "not prime";
        else
            return "prime";

        /* O(n);
        for(int i=2; i<n; i++)
            if(n % i == 0)
                return true;
        
        O(sqrt(n))
        for(int i=2; i<sqrt(n); i++)
            if(n % i == 0)
                return true*/
    }
    
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        string ans = ob.primeOrNot(N);
        cout<<ans << endl;
    }
    return 0;
}
// } Driver Code Ends
