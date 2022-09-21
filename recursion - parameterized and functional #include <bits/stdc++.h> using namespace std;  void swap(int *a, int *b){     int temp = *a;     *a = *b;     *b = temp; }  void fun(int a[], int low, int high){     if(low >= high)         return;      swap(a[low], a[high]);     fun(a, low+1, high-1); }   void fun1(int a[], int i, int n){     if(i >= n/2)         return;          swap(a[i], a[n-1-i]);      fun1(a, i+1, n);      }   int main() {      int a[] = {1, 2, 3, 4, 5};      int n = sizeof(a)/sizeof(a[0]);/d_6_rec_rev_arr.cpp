//recursion - parameterized and functional
#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void fun(int a[], int low, int high){
    if(low >= high)
        return;

    swap(a[low], a[high]);
    fun(a, low+1, high-1);
}


void fun1(int a[], int i, int n){
    if(i >= n/2)
        return;
    
    swap(a[i], a[n-1-i]);

    fun1(a, i+1, n);
    
}


int main()
{

    int a[] = {1, 2, 3, 4, 5};

    int n = sizeof(a)/sizeof(a[0]);

    //fun(a, 0, n-1);
    fun1(a, 0, n);

    for(int i=0; i<n; i++)
        cout << a[i] << " ";
    


}
