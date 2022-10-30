//repeating and missing element of array elements
#include<bits/stdc++.h>
using namespace std;


vector<int> find_mandr(int a[], int n){

    vector<int> res;

    sort(a, a+n);

    for(int i=0; i<n-1; i++){
        if(a[i+1] == a[i] + 1)
            continue;

        else if(a[i] == a[i+1])
            res.push_back(a[i]);
        
        else
            res.push_back(a[i]+1);
        
        if(a[i] == n)
            break;
        else
            res.push_back(n);

    }

    return res;


}


int main(){

    int array[] = {3,1,2,5,4,6,7,5};
    int n = sizeof(array)/sizeof(int);

    vector<int> res = find_mandr(array, n);

    for(int i=0; i<res.size(); i++)
        cout << res[i] << " ";



    

}