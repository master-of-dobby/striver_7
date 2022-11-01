//repeating and missing element of array elements
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int longestSubArrWithSumK_BF(int a[], int n, int k){
    int max_l=0;
    int sum=0;

    for(int i=0; i<n; i++){
        sum=0;
        for(int j=i; j<n; j++){
            sum += a[j];
            if(sum == k)
                max_l = max(max_l, (j-i+1));
        }
    }

    return max_l;
        
    

}




int main(){

    int array[] = {7,1,6,0};
    int n = sizeof(array)/sizeof(int);

    /*vector<int> res = findZeroes(array, n, 2);

    for(int i=0; i<res.size(); i++)
        cout << res[i] << " ";*/
    
    vector<int> v(array, array+n);

    cout << longestSubArrWithSumK_BF(array, n, 7);



    

}