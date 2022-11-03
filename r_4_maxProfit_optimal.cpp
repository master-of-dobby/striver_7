#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &a) {

    int max_p = 0;
    int min_s = INT_MAX;
    int n = sizeof(a)/sizeof(int);

    for(int i=0; i<n; i++){
        min_s = min(min_s, a[i]);
        max_p = max(max_p, a[i] - min_s);
    }
    /*
    int m_pos = 0;
    for(int i=0; i<n; i++){
        if(min_s > a[i]){
            min_s = a[i];
            m_pos = i;
        }
    }

    for(int i=m_pos; i<n; i++)
        max_p = max(max_p, a[i] - min_s);
    */
        
    
    return max_p;
}

int main() {
    vector<int> arr = {7,1,5,3,6,7};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;
}