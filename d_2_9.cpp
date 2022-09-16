//welcome program for striver
#include<iostream>
using namespace std;

int main()
{
    int n=5;
    int i,j,k,m;  

    k = 2*n-2;

    for(i=1; i<=n; i++){
        
        for(j=1; j<=i; j++)
            cout << "*";
        
        for(j=1; j<=k; j++)
            cout << " ";

        k = k-2;
        
        for(j=1; j<=i; j++)
            cout << "*";
        
        cout << endl;
        
        
        
        
    }

    k = 2;

    for(i=1; i<=n; i++){

        for(j=n-1; j>=i; j--)
            cout << "*";
        
        for(j=1; j<=k; j++)
            cout << " ";
        
        k = k + 2;

        for(j=n-1; j>=i; j--)
            cout << "*";

        
        cout << endl;
    }

    


   

   
}

