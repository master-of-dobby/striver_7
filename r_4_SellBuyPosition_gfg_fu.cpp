//{ Driver Code Starts
// Program to find best buying and selling days
#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}

// } Driver Code Ends


// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int a[], int n) {
     //code here
    /*map<int, int> m;
    int max=0,i,j;
    int sum = INT_MIN;

    
    for(i=0; i<n-1; i++){
        for(j=i; j<n-1; j++){
            //cout << j  << " " << j+1 << endl;
            
            //if((j+1 == n-1) && (a[j+1] - a[j]) && (m.find(j)))
              //  m[i] = j+1;
             
            if(i != n-1 && j+1 == n-1)
                m[i] = j+1;
                
            else if(a[j+1] - a[j] > 0)
                max = a[j+1] - a[j];
            
            else if(a[j+1] - a[j] < 0){
                max =  0;
                
                if(i == j)
                    break;
                
                if(sum < i+j)
                    sum = i+j;
                else
                    goto X;

                if(j != 0){
                    m[i] = j;
                }
                    
                    
                
                i = j;
                break;
                
            }
            
        }
        
        
    }
    
    X :
    for(auto it : m)
        cout << "(" << it.first << " " << it.second << ") ";
        cout<<i<<j<<endl;
    
    cout << endl;
    */
    
        int sell = 0,buy = 0,flag=0;

        for(int i=0; i<n; i++){
            if(a[i] >= a[i-1] && a[i] != a[buy]){
                sell++;
                flag=1;
            }
            
            else if(buy == sell){
                buy = sell = i;
            }
            
            else{
                cout<<"("<<buy<<" "<<sell<<")"<<" ";
                buy = sell = i;
            }
        }

        if(flag == 0)
            cout<<"No Profit";
    

        else if(buy != n-1 && sell == n-1)
            cout<<"("<<buy<<" "<<sell<<")"<<" ";
        
        cout << endl;
            
        
    
    
    
    
    
    
       
}