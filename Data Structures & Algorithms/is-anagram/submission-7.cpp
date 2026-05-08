class Solution {
public:
    bool isAnagram(string s, string t) {
        

        if( s.length() != t.length()){
            return false;
        }

        unordered_map<char,int> sString;
        unordered_map<char,int> tString;

        for(int i =0;i < s.length();++i){
            sString[s[i]] = sString[s[i]] + 1;
            tString[t[i]] = tString[t[i]] + 1;
        }

        if(sString == tString){
            return true;
        }
        return false;

    }
};
