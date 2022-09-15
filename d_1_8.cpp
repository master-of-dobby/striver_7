//welcome program for striver
#include<iostream>
using namespace std;

int main()
{
    int p=1,n=5;

    for(int i=n; i>=1; i--){
        for(int j=1; j<=p; j++){
            cout << " ";
        }
        for(int k=1; k<=(2*i-1); k++)
                cout << "*";
        cout << endl;
        p++;
    }
}
