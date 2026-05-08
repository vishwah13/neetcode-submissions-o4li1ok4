class Solution {
public:
    bool isAnagram(string s, string t) {
        

        if( s.length() != t.length()){
            return false;
        }

        map<char,int> sString;

        for(char c : s){
            sString[c] = sString[c] + 1;
        }

        map<char,int> tString;

        for(char c : t){
            tString[c] = tString[c] + 1;
        }

        if(sString == tString){
            return true;
        }
        return false;

    }
};
