//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>a, int n, int k)
    {
        // code here
        int low = 0;
        int high = n-1;
        int flag=0;
        
        if(k > a[n-1])
            return n;
        
        if(k < a[0])
            return 0;
        
        while(low <= high){
            int mid = (low + high)/2;
            
            if(a[mid] == k){
                flag = 1;
                return mid;
            }
                
            else if((a[mid] < k) && (a[mid+1] > k))
                return mid+1;
                
            
            else if((a[mid] > k) && (a[mid-1] < k))
                return mid;
            
            else if(a[mid] > k)
                high = mid-1;
            
            else if(a[mid] < k)
                low = mid+1;
        }
        
        
        return -1;
        
    }

    int searchInsert(vector<int>& nums, int target){
        for(int i=0; i<nums.size(); i++)
        //for(auto i : nums)
            if(target == nums.at(i))
                return i;
        
        for(int i=0; i<nums.size(); i++)
        //for(auto i: nums)
            if((target < nums.at(i)))
                return i;
        
        
        return nums.size();
           
        
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends