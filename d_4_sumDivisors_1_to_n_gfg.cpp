//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
     long long sumOfDivisors(int n)
    {
        // Write Your Code here
        long long s=0;
        /*for(int i=1; i<=n; i++){
            for(int j=1; j<=sqrt(i); j++){
                if(i % j == 0){
                    s += j;
                    if(j != i/j)
                        s += i/j;
                }
            }
        }*/
        
        for(int i=1; i<=n; i++) 
            s += (n / i) * i;

        return s;
        
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
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends
