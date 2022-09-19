//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


void printDivisors(int n){

    for(int i=1; i<=n; i++)
        if(n % i == 0)
            cout << i << " ";
    
}


void printDivisors2(int n){

    for(int i=1; i<=sqrt(n); i++){
        if(n % i == 0){
            cout << i << " ";

            if(i != n/i)
                cout << n/i << " ";
        }
    }
}

//{ Driver Code Starts.
int main() {
    int t=1;
    //cin >> t;
    while (t--) {
        //long long A,B;
        int n;

        
        cin >> n;

        printDivisors(n);
        
        cout << endl;

        printDivisors2(n);
    }
    return 0;
}
// } Driver Code Ends
