//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

//general
void fun1(int i, int n){
    if(i > n)
        return;
    
    cout << "striver" << endl;
    fun1(i+1, n);

}


//backtracking
void fun(int n){
    if(n == 0)
        return;
    
    cout << "striver" << endl;
    fun(n-1);

}


int main()
{
    int n;
    cout << "Enter the count : ";
    cin >> n;
    fun1(1, n);
    cout << endl;

    fun(n);
    
    return 0;
}
