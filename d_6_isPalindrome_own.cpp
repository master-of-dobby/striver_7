//recursion - parameterized and functional
#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
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


    


}
