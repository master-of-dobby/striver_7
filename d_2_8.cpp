//welcome program for striver
#include<iostream>
using namespace std;

int main()
{
    int n=10;
    int i,j,k,m;  
    k = 2;

    for(i=1;i<=n/2;i++){

        for(int j=n/2; j>=i; j--)
            cout << "*";
        
        if( i >= 2){
            for(int j=1; j<=k; j++)
                cout << " ";
            k = k+2;
        }

        for(int j=n/2; j>=i; j--)
            cout << "*";
        
        cout << endl;
        
        
      
    }

    k = n-2;

    for(i=1; i<=n/2; i++){
        for(j=1; j<=i; j++)
            cout << "*";
        
        if(i < n/2){
            for(int j=1; j<=k; j++)
                cout << " ";
            
            k = k-2;
        }
        
        for(int j=1; j<=i; j++)
            cout << "*";
        
        cout << endl;

    }


   

   
}

