//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long x) {
        // code here
        vector<long long> v;
        long long s=00000000000000000000000000;

        if(x==0)
            return 0;
            
        if(x==1)
            return 2147483648;
        
        v = convert_binary(x);
        for(int i=v.size(); i<32; i++)
            v[i] = 0;

        /*for(int i=0; i<32; i++)
            cout << v[i] << " ";
        cout << endl;
        

        //reverse(v.begin(), v.end());*/

        int k=31;
        for(int i=0; i<32; i++)
            v[i] = v[i]*pow(2, k--);
        
        for(auto it=v.begin(); it != v.end(); it++)
            s = s + *it;

        cout << s << endl; 
            

        return s;
        
    }

    vector<long long> convert_binary(long long x){

        vector<long long> v;

        while(x){
            long long k = x%2;
            v.push_back(k);
            x = x/2;

        }

        return v;

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;

        //vector<long long> v = ob.convert_binary(5);

        //for(int i=0; i<v.size(); i++)
          //  cout << v[i];
    }
    return 0;
}
// } Driver Code Ends
