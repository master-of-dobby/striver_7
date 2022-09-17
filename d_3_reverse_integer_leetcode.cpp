class Solution {
public:
    int reverse(int x) {
        
        if(x==1)
            return 1;
        if(x==0)
            return 0;
        
        long long s=0;
        //long long k=0;
        
        while(x){
            //k = x % 10;
            s = s*10 + x % 10;
            
            x = x/10;
        }
        
        if(s > pow(2, 31)-1 || s < -(pow(2, 31)-1))
            return 0;
        
        
        return s;
        
    }
};
