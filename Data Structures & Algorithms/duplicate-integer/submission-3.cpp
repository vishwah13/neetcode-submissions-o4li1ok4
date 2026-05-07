class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;

        for(int i : nums){

            if(map.contains(i)){
                return true;
            }
            map[i] = map[i] + 1;
        }
        return false;
    }
};