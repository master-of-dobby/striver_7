//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
            int s=0,r=0,k=0;
            r = n;

            while(n){
                s = s * 10 + n % 10;    
                n = n/10;
            }

            if(s == r)
                return "Yes";
            else
                return "No";

		    
		}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.is_palindrome(n) << endl;

      
    }
    return 0;
}
// } Driver Code Ends
