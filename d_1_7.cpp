//welcome program for striver
#include<iostream>
using namespace std;

int main()
{
    int n=5;
    
    for(int i=1; i<=5; i++){
        for(int j=n-1; j>=1; j--){
            cout << " ";
        }
        for(int k=1; k<=(2*i-1); k++)
                cout << "*";
        cout << endl;
        n--;
    }
}
