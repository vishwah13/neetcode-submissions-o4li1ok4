class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> map;

        for(const int& val : nums){
            map[val] = map[val] + 1;

            if(map[val] > 1){
                return true;
            }
        }
        return false;
    }
};