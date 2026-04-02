class Solution {
public:
    bool isValid(string s) {
        
        unordered_map<char,char> map {{'}','{'},{']','['},{')','('}};
        stack<char> st;

        for(char c : s){
            if(map.contains(c)){
                if(st.empty()) return false;
                char ch = st.top();
                st.pop();
                if(ch != map[c]){
                    return false;
                }
            }else{
                st.push(c);
            }
        }
        return st.empty();
    }
};
