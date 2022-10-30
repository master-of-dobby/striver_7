//repeating and missing element of array elements
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int findZeroes(int a[], int n, int m) {
    // code here

    int i=0,zeroCount=0,ans=0;

    for(int j=0; j<n; j++){
        if(a[j] == 0)
            zeroCount++;
        
        while(zeroCount > m){
            if(a[i] == 0)
                zeroCount--;
            
            i++;
        }

        ans = max(ans, j-i+1);
    }

    return ans;

}  



int main(){

    int array[] = {1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1};
    int n = sizeof(array)/sizeof(int);

    /*vector<int> res = findZeroes(array, n, 2);

    for(int i=0; i<res.size(); i++)
        cout << res[i] << " ";*/

    cout << findZeroes(array, n, 2);



    

}