//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> m;
        int sum=0, count=0;
        m[sum] = 1;

        for(int i=0; i<nums.size(); i++){
            sum += nums[i];

            if(m.find(sum - k) != m.end())
                count += m[sum-k];
            
            m[sum]++;

        }

        return count;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        vector<int> arr;
        for(int i=0;i<len;i++){
            int m;
            cin >> m;
            arr.push_back(m);
        }
        Solution ob;
        int k;
        cin >> k;
        cout<<ob.subarraySum(arr, k)<<'\n';
    }
    return 0;
}

// } Driver Code Ends