//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array
const int inf = 1e9;

class Solution{
  public:
    int minJumps(int a[], int n){
        // Your code here -- greedy approach

        if (n <= 1)
            return 0;
 
   
        if (a[0] == 0)
            return -1;

        int dp[n];

        for(int i=0; i<n; i++)
            dp[i] = inf;
        
        dp[0] = 0;

        for(int i=1; i<=n; i++){
            for(int j=0; j<=i; j++){
                if(i <= (j + a[j]))
                    dp[i] =  min(dp[i], dp[j]+1);

            }
        }

        return dp[n-1];
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
