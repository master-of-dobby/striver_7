class Solution {
public:
    int majorityElement(vector<int>& nums){
        
        /*
        int element=0;
        int count=0;
        
        for(int i=0; i<nums.size(); i++){
            if(count == 0)
                element = nums[i];
            
            if(element == nums[i])
                count++;
            
            else
                count--;
        }
        
        return element;*/
        
        unordered_map<int, int> mp;
        
        for(int i=0; i<nums.size(); i++)
            mp[nums[i]]++;
        
        for(auto it: mp){
            if(it.second > nums.size()/2)
                return it.first;
        }
        
        return -1;
        
    }
};
