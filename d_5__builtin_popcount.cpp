//practice
#include<bits/stdc++.h>
using namespace std;

int getBits(int n){
    int count = 0;

    return __builtin_popcount(n);
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
    
    long long l = 77777777777777;
    cout << "\n\t For long long integer \n ";
    cout << __builtin_popcountll(l) << endl;
    
}
