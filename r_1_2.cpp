//union of array elements
#include<bits/stdc++.h>
using namespace std;


vector<int> find_union(vector<int> a, vector<int> b){

    vector<int> res;
    int i=0,j=0;

    while(i < a.size() && j < b.size()){

        if(a[i] <= b[j]){
            while(res.size() == 0 || res.back() != a[i])
                res.push_back(a[i]);
            i++;
        }
        else{
            while(res.size() == 0 || res.back() != b[j])
                res.push_back(b[j]);
            j++;

        }
    }

    while(i < a.size()){
        if(res.back() != a[i])
            res.push_back(a[i]);
        i++;
    }

    while(j < b.size()){
        if(res.back() != b[j])
            res.push_back(b[j]);
        j++;
    }
    

    return res;



}


int main(){

    vector<int> v1 = {1,2,3,4,5,6,7,8,9,10};
    vector<int> v2 = {2,3,4,4,5,11,12};

    vector<int> res = find_union(v1, v2);

    for(int i=0; i<res.size(); i++)
        cout << res[i] << " ";
    

}