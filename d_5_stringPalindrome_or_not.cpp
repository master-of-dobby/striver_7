//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string s)
	{
        /*
	    // Your code goes here
        int low = 0;
        int high = s.length()-1;

    
        while(low < high){
            if(s[low] != s[high])
                return 0;
            low++;
            high--;
        }

        return 1;*/

        string k = s;

        reverse(s.begin(), s.end());

        if(s == k)
            return 1;
        return 0;


	    
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends
