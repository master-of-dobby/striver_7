//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        
        //vector<int> nums(a , a + n);
        

        /*if(nums.size() == 1)
          //  return;
          int c=0;
        
        

        for(int i=0; i<nums.size(); i++){
            
            if(nums[i] == 2){
                nums.push_back(2);
                nums.erase(nums.begin()+i);
                c++;
            }
            else if(nums[i] == 0){
                nums.insert(nums.begin(), 0);
                nums.erase(nums.begin()+i);
                
            }
            else if(nums[i] == 1){
                nums.erase(nums.begin()+i);
                nums.insert(nums.end()-c-1, 1);
            }
        }
        
        for(int i=0; i<n; i++)
            a[i] = nums[i];
            
        */
        
        int p=0,q=0,r=0;
        
        for(int i=0; i<n; i++){
            if(a[i] == 0)
                p++;
            else if(a[i] == 1)
                q++;
            else if(a[i] == 2)
                r++;
        }
        
        for(int i=0; i<n; i++){
            if(p){
                a[i] = 0;
                p--;
            }
            else if(q){
                a[i] = 1;
                q--;
            }
                
            else if(r){
                a[i] = 2;
                r--;
            }

        }
       

        
    }

};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends