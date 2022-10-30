//repeating and missing element of array elements
#include<bits/stdc++.h>
using namespace std;
#define ll long long

 int findZeroes(int arr[], int n, int m) {
        // code here

        int orig_one_count = 0;

        int max_diff = 0;

        int curr_max = 0;

    for (int i=0; i<n; i++)
    {
        // Count of zeros in original array (Not related
        // to Kadane's algorithm)
        if (arr[i] == 1)
           orig_one_count++;
 
        // Value to be considered for finding maximum sum
        int val = (arr[i] == 0)? 1 : -1;
 
        // Update current max and max_diff
        curr_max = max(val, curr_max + val);
        max_diff = max(max_diff, curr_max);
    }
    max_diff = max(0, max_diff);
 
    return orig_one_count + max_diff;

    }  



int main(){

    int array[] = {1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1};
    int n = sizeof(array)/sizeof(int);

    /*vector<int> res = findZeroes(array, n, 2);

    for(int i=0; i<res.size(); i++)
        cout << res[i] << " ";*/

    cout << findZeroes(array, n, 2);



    

}