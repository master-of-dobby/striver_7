//recursion - parameterized and functional
#include <bits/stdc++.h>
using namespace std;

void fun(int i, int fact){
    if(i == 1){
        cout << fact << endl;
        return;
    }

    fun(i-1, fact*i);
}


int fun1(int n){
    if(n==1)
        return 1;
    
    return n * fun1(n-1);
}

int main()
{
    int n = 5;
    cout << "Enter n value : ";
    cin >> n ;

    fun(n, 1);

    cout << fun1(n) << endl;
}
