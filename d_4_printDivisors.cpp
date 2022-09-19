//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void printDivisors(int n){
     

        for(int i=1; i<=n; i++)
            if(n % i == 0)
                cout << i;
            
        
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
        ob.printDivisors(N);
        //cout<<ans << endl;
    }
    return 0;
}
// } Driver Code Ends
