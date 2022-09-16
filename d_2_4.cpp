//welcome program for striver
#include<iostream>
using namespace std;

int main()
{
    int n=5;
    char k='A';

    for(int i=n; i>=1; i--){
        k = 'A';
        for(int j=1; j<=i; j++)
            cout << k++ << "";
        
        cout << endl;
    }

   

   
}
