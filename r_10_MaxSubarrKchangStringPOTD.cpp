//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int characterReplacement(string s, int k){
		    // Code here
		   /* Code here
		    map<char, int> mp;
		    vector<int> res;
		    
		    for(int i=0; i<s.length(); i++)
		        mp[s[i]]++;
		        

			int Curr_max = 0;
			int s_max = 0;

			for(auto it = mp.begin(); it != mp.end(); it++){
			   	Curr_max = max(Curr_max, it->second);
			}
			
			for(auto it = mp.begin(); it != mp.end(); it++){
			   	if(it->second < Curr_max)
			   	    s_max = max(s_max, it->second);
			}
			
			
			
			
			if( k >= s_max){
			    if((Curr_max + s_max) >= s.length())
			        return s.length();
			     else
			        return s_max + k;
			        
			}
		       

		   return Curr_max+k;*/
		   
		   vector<int> freq(26, 0);
		   
		   int max_freq = 0;
		   int start = 0;
		   int end = 0;
		   int ans =0;
		   
		   while(end < s.length()){
		       int curr = freq[s[end++]-'A']++;
		       
		       max_freq = max(max_freq, curr+1);
		       
		       if((k + max_freq) < (end - start))
		           freq[s[start++]-'A']--;
		        else
		            ans = max(ans, end-start);
		   }
		   
		   return ans;
		    
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		int k;
		cin >> k;
		Solution obj;
		int ans = obj.characterReplacement(s, k);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends