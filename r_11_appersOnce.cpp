//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int a[], int n)
    {
        //code here.
        int i=1;
        
        if(n==1)
            return a[0];
        
        if(a[n-1] != a[n-2])
            return a[n-1];
        
        for(i=0; i<n; i++){
             if(a[i] == a[i+1]){
                i++;
                continue;
            }
            else
                return a[i];
        }
        
       
        
        return -1;
    
          
                
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends