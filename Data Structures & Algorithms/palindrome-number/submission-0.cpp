class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x < 0){
            return false;
        }

        long long res = 0;
        int num = x;

        while(num != 0){
            res = (res * 10) + (num % 10);
            num /= 10;
        }

        return res == x;
    }
};