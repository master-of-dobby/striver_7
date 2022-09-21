//recursion - parameterized and functional
#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

bool isPalindrome1(string s, int i, int n){
    if(i >= n/2)
        return 1;
    
    if(s[i] != s[n-i-1])
        return 0;
    
    return isPalindrome1(s, ++i, n);
}

bool isPalindrome(string a, int low, int high){

    if(low == high)
        return 1;

    if(a[low] != a[high])
        return 0;

    return isPalindrome(a, low+1, high-1);

}



int main()
{

    string s = "madam";
    string s1 = "hello";

    if(isPalindrome(s, 0, s.length()-1))
        cout << "palindrome!" << endl;
    
    else
        cout << "NOT a palindrome!" << endl;
    

     if(isPalindrome(s1, 0, s1.length()-1))
        cout << "palindrome!" << endl;
    
    else
        cout << "NOT a palindrome!" << endl;
   
    // another method checking...........


    if(isPalindrome1(s, 0, s.length()))
        cout << "palindrome!" << endl;
    
    else
        cout << "NOT a palindrome!" << endl;
    

     if(isPalindrome1(s1, 0, s1.length()))
        cout << "palindrome!" << endl;
    
    else
        cout << "NOT a palindrome!" << endl;


    


}
