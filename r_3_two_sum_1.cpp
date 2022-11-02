//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> twoSum(vector<int>& nums, int target){

        vector<int> res;

        /*for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++)
                if(nums[i]+nums[j] == target){
                    res.push_back(i);
                    res.push_back(j); }

            if(res.size() == 2)
                break;
        }
            
        return res;

        int l=0,r=nums.size()-1,n1,n2;

        vector<int> r1;

        copy(nums.begin(), nums.end(), back_inserter(r1));

        sort(r1.begin(), r1.end());


        while(l < r){

            if(r1[l] + r1[r] == target){
                n1 = r1[l];
                n2 = r1[r];
                break;
            }

            else if(r1[l] + r1[r] > target)
                r--;
            
            else
                l++;
               

        }

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == n1)
                res.emplace_back(i);
            else if(nums[i] == n2)
                res.emplace_back(i);
        }

        return res;*/


        unordered_map<int, int> m;

        for(int i=0; i<nums.size(); i++){

            if(m.find(target-nums[i]) != m.end()){
                res.emplace_back(m[target-nums[i]]);
                res.emplace_back(i);

                return res;
            }


            m[nums[i]] = i;
        }

        return res;
        
    }
};

//{ Driver Code Starts.

int main ()
{
    int t; 
    vector<int> v = {3,2,4,6};

    Solution s1;
    vector<int> res  = s1.twoSum(v, 6);

    for(auto it : res)
        cout << it << " ";
}
// } Driver Code Ends