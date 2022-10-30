//repeating and missing element of array elements
#include<bits/stdc++.h>
using namespace std;
#define ll long long


vector<int> find_mandr(int a[], int n){


        /*int n = nums.size();
        
        vector<int> res(n+1, 0);
        
        for(int i=0; i<n; i++)
            res[nums[i]]++;
    
        for(int i=0; i<=n; i++)
            if(res[i] == 0)
                return i;
    
        return 0;*/
        long long S = (nums.size()*(nums.size()+1))/2;
        long long P = (nums.size()*(nums.size()+1)*(2*nums.size()+1))/6;
        
        for(int i=0; i<nums.size(); i++){
            S -= (long long)nums[i];
            P -= (long long)nums[i]*(long long)nums[i];
        }
        
        if(S==0)
            return 0;
        
        long long res = (S + P/S)/2;
        
        return res;
        
}



int main(){

    int array[] = {3,1,2,5,4,6,7,5};
    int n = sizeof(array)/sizeof(int);

    vector<int> res = find_mandr(array, n);

    for(int i=0; i<res.size(); i++)
        cout << res[i] << " ";



    

}