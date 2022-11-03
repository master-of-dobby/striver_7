#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &a) {

    int max_p = 0;
    int n = sizeof(a)/sizeof(int);

    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(a[j] > a[i])
                max_p = max(max_p, a[j] - a[i]);
 

    return max_p;
}

int main() {
    vector<int> arr = {7,1,5,3,6,4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;
}