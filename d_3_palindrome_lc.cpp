class Solution {
public:
    bool isPalindrome(int x) {
        long long int t,m,s=0;
        m = x;

        if(x<0)
            return false;
        
        while(x){
            t = x % 10;
            s = s*10 + t;
            x = x/10;
        }

        if(s==m)
            return true;
        else
            return false;
        
    }
};

/*
int main()
{
    Solution s1;


}*/
