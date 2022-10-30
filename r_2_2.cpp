//repeating and missing element of array elements
#include<bits/stdc++.h>
using namespace std;


vector<int> find_mandr(int a[], int n){

    
    
    int res[n+1];
    vector<int> r;

    for(int i=0; i<=n; i++)
        res[i] = 0;
    
    for(int i=0; i<n; i++)
        res[a[i]]++;
    

    for(int i=1; i<=n; i++)
        if(res[i] == 0 || res[i] > 1)
            r.push_back(i);
    
    return r;



}


int main(){

    int array[] = {3,1,2,5,4,6,7,5};
    int n = sizeof(array)/sizeof(int);

    vector<int> res = find_mandr(array, n);

    for(int i=0; i<res.size(); i++)
        cout << res[i] << " ";



    

}