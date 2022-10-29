//union of array elements
#include<bits/stdc++.h>
using namespace std;


vector<int> find_union(vector<int> a, vector<int> b){

    vector<int> res;

    map<int, int> m;

    for(int i=0; i<a.size(); i++)
        m[a[i]]++;
    
    for(int i=0; i<b.size(); i++)
        m[b[i]]++;

    
    for( auto &it : m)
        res.push_back(it.first);
    

    return res;



}


int main(){

    vector<int> v1 = {1,2,3,4,5,6,7,8,9,10};
    vector<int> v2 = {2,3,4,4,5,11,12};

    vector<int> res = find_union(v1, v2);

    /*

    map<int, int> res;
    int k=0;
    
    for(int i=0; i<v1.size(); i++)
        res.insert({v1[i],k++});
    

    for(int i=0; i<v2.size(); i++)
        res.insert({v2[i],k++});

    
    for(auto it = res.begin(); it != res.end(); it++)
        cout << it->first << endl;
    */
    

    for(int i=0; i<res.size(); i++)
        cout << " " << res[i];

}