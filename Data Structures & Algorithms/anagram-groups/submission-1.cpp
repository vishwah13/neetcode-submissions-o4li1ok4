class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        if(strs.size() == 0){
            return {{}};
        }

        unordered_map<string,vector<string>> map;
        for(const string& s : strs){
            string sortS = s;
            sort(sortS.begin(),sortS.end());
            map[sortS].push_back(s);
        }

        vector<vector<string>> result;

        for(const auto& [k,v] : map){
            result.push_back(v);
        }
        return result;
    }
};
