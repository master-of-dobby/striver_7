#include <bits/stdc++.h>
using namespace std;

int main(){

    int a[] = {10,5,10,15,10,5};
    int n = sizeof(a)/sizeof(a[0]);

    unordered_map<int, int> m;

    for(int i=0; i<n; i++)
        m[a[i]]++;
    
    //for(auto it = m.begin(); it != m.end(); it++)
    //     cout << it->first << " " << it->second << endl;

    for(auto x : m)
        cout << x.first << " " << x.second << endl;


    return 0;





    
    return 0;
}
d
