class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int totalProduct = 1;
        int zeroCount = 0;

        for(int n : nums){
            if (n != 0) totalProduct *= n;
            else zeroCount++;
        }

        vector<int> result;
        for(int n : nums){
            int val;
            if (zeroCount > 1) val = 0;
            else if (zeroCount == 1) val = (n == 0) ? totalProduct : 0;
            else val = totalProduct / n;
            result.push_back(val);
        }

        return result;
    }
};
