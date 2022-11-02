//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    int maxSubArray(vector < int > & nums, vector < int > & subarray){

        int max = INT_MIN;
        int sum=0,s=0;

        for(int i=0; i<nums.size(); i++){
            sum += nums[i];

            if(sum > max){
                subarray.clear();
                max = sum;
                subarray.push_back(s);
                subarray.push_back(i);
            }
                
            
            if(sum < 0){
                sum = 0;
                s = i + 1;
            }
                
        }

        return max;
    }

};

//{ Driver Code Starts.

int main(){

    vector<int> arr{-2,1,-3,4,-1,2,1,-5,4};
    vector < int > subarray;
    Solution s1;
    int lon = s1.maxSubArray(arr, subarray);
    cout << "The longest subarray with maximum sum is " << lon << endl;
    cout << "The subarray is " << endl;
    for (int i = subarray[0]; i <= subarray[1]; i++) 
        cout << arr[i] << " ";

    return 0;
}

// } Driver Code Ends