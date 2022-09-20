//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
public:
    
    /*char asciitolower(char in) {
    if (in <= 'Z' && in >= 'A')
        return in - ('Z' - 'z');
    return in;
    }*/


    bool isPalindrome(string s) {
        //cout << s.length() << endl;
        for(int i=0; i<s.length(); i++){
            //if(!(('0' <= s[i] <= '9') and  ('a' <= s[i] <= 'z') and ('A' <= s[i] <= 'Z'))){
            if((s[i] < 'A' || s[i] > 'Z') && (s[i] < 'a' || s[i] > 'z') && (s[i] < '0' || s[i] > '9')){
                s.erase(i, 1);
                i--;
            }
                
        }
            
        //cout << s.length() << endl;
        cout << s << endl;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        //to_lower(s);
               
        int low = 0;
        int high = s.length()-1;
        
        while(low < high){
            if(s[low] != s[high])
                return false;
            
            low++;
            high--;
        }
    
        return true;
        
        /*string k = s;
        
        //reverse(s.begin(), s.end());
        //cout << s << endl;
        //cout << k << endl;
        
        if(s == k)
            return 1;
        
        return 0;*/
        
        
    }
};


//{ Driver Code Starts.

int main() 
{
    
   	/*ios_base::sync_with_stdio(0);
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
   	}*/

    string s = "$Gee*k;s..fo, r'Ge^eks?123";
    Solution ob;
    cout << ob.isPalindrome(s) << endl;
    
    string s1 = "malayalam";
    cout << ob.isPalindrome(s1) << endl;



    return 0;
}
// } Driver Code Ends
