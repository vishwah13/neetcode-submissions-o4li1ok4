class Solution {
public:
    bool isPalindrome(int x) {

        if(x < 0){
            return false;
        }
        
        int num = x;
        int res = 0;

        while(num != 0){
            res = (res * 10) + (num % 10);
            num /= 10;
        }
        return x == res;
    }
};