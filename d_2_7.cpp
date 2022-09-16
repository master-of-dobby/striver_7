//welcome program for striver
#include<iostream>
using namespace std;

int main()
{
    int n=5;
    char ch='E';
    char ch1 = 'E';
    

    int i,j,k,m;    
    for(i=1;i<=n;i++){

        for(int j=1; j<=i; j++){
            cout << ch++ << " ";
        }

        cout << endl;
        ch = ch1;
        ch1--;
        ch--;
    }

   

   
}

/*
 geeksforgeeks solution

char ch = 'A' + n-1;
    char ch1 = ch;
   
    

    int i,j,k,m;    
    for(i=1;i<=n;i++){

        for(int j=1; j<=i; j++)
            cout << ch-- << " ";
        
        
        cout << endl;
        ch = ch1;
       
        
    }
    */
