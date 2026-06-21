class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        unordered_set<int> hashSet(nums.begin(),nums.end());

        for(int i =0;i < nums.size();++i){
            if(hashSet.find(i) == hashSet.end()){
                return i;
            }
        }
        return nums.size();
    }
};
