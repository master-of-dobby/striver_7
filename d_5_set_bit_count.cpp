//practice
#include<bits/stdc++.h>
using namespace std;

int getBits(int n){
    int count = 0;

    while(n){
        n  = n & n-1;
        count++;
    }

    return count;
}

vector<int> countBits(int n){
    vector<int> res;

    for(int i=0; i<=n; i++)
        res.push_back(getBits(i));
    

    return res;
}

int main()
{
    int n;
    cout << "\n\t Enter the size : ";
    cin >> n;

    vector<int> r = countBits(n);

    for(int i=0; i<r.size(); i++)
        cout << r[i] << " ";
    
}
