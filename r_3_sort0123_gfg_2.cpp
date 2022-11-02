//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    void sortColors(vector<int>& nums) {
        int lo = 0; 
        int hi = nums.size() - 1; 
        int mid = 0; 

        while (mid <= hi) { 
            switch (nums[mid]) { 

           
            case 0: 
                swap(nums[lo++], nums[mid++]); 
                break; 

           
            case 1: 
                mid++; 
                break; 

            case 2: 
                swap(nums[mid], nums[hi--]); 
                break; 
            }
        }
         
    }
};


//{ Driver Code Starts.
int main() {



        int a[] = {2,0,2,1,1,0};
        int b[] =  {6, 3, 4, 0};

        vector<int> a1 ={2,0,2,1,1,0};

        Solution s1;
        s1.sortColors(a1);

        for(int i=0; i<a1.size(); i++)
            cout << a1[i] << " ";
	
	return 0;
}
// } Driver Code Ends