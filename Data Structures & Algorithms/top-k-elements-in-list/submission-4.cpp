class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> map;
        
        for(int i : nums){
            map[i]++;
        }

        vector<pair<int,int>> freq;

        for(const auto& entry : map){
            freq.push_back({entry.second,entry.first});
        }

        sort(freq.rbegin(),freq.rend());

        vector<int> result;
        for(int i = 0;i < k;++i){
            result.push_back(freq[i].second);
        }
        return result;

    }
};
