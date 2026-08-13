class Solution {
public:
    bool isPalindrome(int x) {
        int dup = x;
        long long rev = 0;
        while(x>0){
            int r = x%10;
            rev = rev*10 + r;
            x = x/10;
        }
        if(dup == rev){
            return true;
        }
        else return false;
    }

        
    
};