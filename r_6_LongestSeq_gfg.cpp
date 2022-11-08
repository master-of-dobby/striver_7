//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
        
        //Your code here
        int l_streak = 0;
       
        set<int> res;
          
        for(int i=0; i<n; i++)
            res.insert(arr[i]);
        
        for(int i=0; i<n; i++){
            if(!res.count(arr[i]-1)){
                int c_num = arr[i];
                int c_streak = 1;
                
                while(res.count(c_num+1)){
                    c_num += 1;
                    c_streak += 1;
                }
                
                l_streak = max(l_streak, c_streak);
            }
            
        }
        
        return l_streak;
    
        
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends