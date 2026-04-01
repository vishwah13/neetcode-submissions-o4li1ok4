class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        if(strs.size() == 0){
            return {{}};
        }

        unordered_map<string,vector<string>> map;
        for(int i = 0;i < strs.size();++i){
            string sortS = strs[i];
            sort(sortS.begin(),sortS.end());
            map[sortS].push_back(strs[i]);
        }

        vector<vector<string>> result;

        for(const auto& pair : map){
            result.push_back(pair.second);
        }
        return result;
    }
};
