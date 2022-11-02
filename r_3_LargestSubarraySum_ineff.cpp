//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    int maxSubArray(vector < int > & nums, vector < int > & subarray){

        /*
        int max_sum = INT_MIN;
        int n = nums.size();

        if (n == 1) 
            return nums[0];
  

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                int sum = 0;

                for(int k=i; k<=j; k++)
                    sum += nums[k];
                
                if(sum > max_sum){
                    max_sum = sum;
                    subarray.clear();
                    subarray.push_back(i);
                    subarray.push_back(j);
                }
            }
        }

        return max_sum;*/

        int max_sum = INT_MIN;
        int n = nums.size();

        if (n == 1) 
            return nums[0];
  

        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=i; j<n; j++){
                sum += nums[j];

                /*for(int k=i; k<=j; k++)
                    sum += nums[k];*/
                
                
                if(sum > max_sum){
                    max_sum = sum;
                    subarray.clear();
                    subarray.push_back(i);
                    subarray.push_back(j);
                }
            }
        }

        return max_sum;
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