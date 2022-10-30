//repeating and missing element of array elements
#include<bits/stdc++.h>
using namespace std;
#define ll long long


vector<int> find_mandr(int a[], int n){

    vector<int> res;

    ll S= (n*(n+1))/2;
    ll P=(n*(n+1)*(2*n+1))/6;
    ll m,r;

    for(int i=0; i<n; i++){
        S -= (ll)a[i];
        P -= (ll)a[i]*(ll)a[i];
    }

    m = (S + P/S)/2;
    r = m - S;

    res.push_back(r);
    res.push_back(m);

    return res;
    

}


int main(){

    int array[] = {3,1,2,5,4,6,7,5};
    int n = sizeof(array)/sizeof(int);

    vector<int> res = find_mandr(array, n);

    for(int i=0; i<res.size(); i++)
        cout << res[i] << " ";



    

}