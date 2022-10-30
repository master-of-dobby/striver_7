//repeating and missing element of array elements
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count=0,max=0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1)
                count++;
            else
                count = 0;
            
            if(count > max)
                max = count;
        }
        
        return max;
    }





int main(){

    int array[] = {1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1};
    int n = sizeof(array)/sizeof(int);

    /*vector<int> res = findZeroes(array, n, 2);

    for(int i=0; i<res.size(); i++)
        cout << res[i] << " ";*/
    
    vector<int> v(array, array+n);

    cout << findMaxConsecutiveOnes(v);



    

}