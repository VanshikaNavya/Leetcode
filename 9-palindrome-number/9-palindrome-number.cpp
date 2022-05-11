class Solution {
public:
    bool isPalindrome(int x) {
        
        long long int r;
        long long int original=x;
        long long int reversed=0;
       
        if(x>0){
        while(x!=0)
        {
            r=x%10;
            reversed=reversed*10+r;
            x=x/10;
        }
        
            if(original==reversed){
                
                return true;
            }
            
            return false;
        }
        
        else if(x==0){
            return true;
        }
        else{
            return false;
        }
    }
};