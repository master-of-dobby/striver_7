//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long a , long long b) {
        // code here
        
        vector<long long> res;

        //lcm
        long long m,n,temp;
        m = a;
        n = b;

        while (n){
            temp = n;
            n = m % n;
            m = temp; 
        }

        temp = (a * b)/m;

        res.push_back(temp);
        
        //gcd
        /*if(a == 0 || b == 0)
            res.push_back(max(a, b));
        
        for(int i=1; i<=min(a, b); i++)
            if(a % i == 0 && b % i == 0)
                temp = i;*/
                
        res.push_back(gcd1(a, b));
            
        return res;
        

    }
    
    long long gcd1(long long a, long long b){
        if(b == 0)
            return a;
        
        return gcd1(b, a % b);
    }
    
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends
