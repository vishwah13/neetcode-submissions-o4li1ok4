class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> map;

        for(int i : nums){

            if(map.contains(i)){
                return true;
            }
            map.insert(i);
        }
        return false;
    }
};