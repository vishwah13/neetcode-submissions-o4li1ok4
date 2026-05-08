class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        if(strs.size() == 0){
            return {{}};
        }
        
        unordered_map<string,vector<string>> map;

        for(const auto& s : strs){
            string sSort = s;
            sort(sSort.begin(),sSort.end());
            map[sSort].push_back(s);
        }

        vector<vector<string>> res;
        for(const auto& [k,v] : map){
            res.push_back(v);
        }

        return res;
    }
};
