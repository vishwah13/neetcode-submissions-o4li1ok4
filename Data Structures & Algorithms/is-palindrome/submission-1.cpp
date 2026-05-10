class Solution {
public:
    bool isPalindrome(string s) {
        
        string tempString;

       for(char c : s){
        if(isalnum(c)){
            tempString += tolower(c);
        }
       }

       for(int l = 0; l < tempString.length();++l){
        if(tempString[l] != tempString[tempString.length() - l - 1]){
            return false;
        }
       }
       return true;
    }
};
