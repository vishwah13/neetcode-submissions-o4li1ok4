class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> map;

        for(int i : nums){
            map[i] = map[i] + 1; 
        }

        vector<pair<int, int>> freqPairs;
        for(const auto& entry : map){
            freqPairs.push_back({entry.second, entry.first});
        }
        sort(freqPairs.rbegin(), freqPairs.rend());

        vector<int> result;

        for(int i = 0; i < k; ++i){

            result.push_back(freqPairs[i].second);
        }

        return result;
    }
};