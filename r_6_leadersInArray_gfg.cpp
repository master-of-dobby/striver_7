//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    
    void remove(std::vector<int> &v)
{
    auto end = v.end();
    for (auto it = v.begin(); it != end; ++it) {
        end = std::remove(it + 1, end, *it);
    }
 
    v.erase(end, v.end());
}

    vector<int> leaders(int a[], int n){
        // Code here
        
        int max = a[n-1];
        
        vector<int> res;
        res.push_back(a[n-1]);
        
        for(int i=n-2; i >= 0; i--){
            
            if(a[i] >= max){
                res.push_back(a[i]);
                max = a[i];
            }
            
        }
        
        reverse(res.begin(), res.end());
        
        /*for(int i=0; i<res.size()-1; i++){
            if(res[i] == res[i+1]){
                res.erase(res.begin()+i);
            }
        }*/
        
        
        return res;
        
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends