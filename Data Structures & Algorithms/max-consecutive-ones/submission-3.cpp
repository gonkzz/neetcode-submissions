class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, max_ones = 0, n = nums.size();
        for (int num : nums) {
            cnt = num ? cnt + 1 : 0;
            max_ones = max(cnt, max_ones);
        }
        return max_ones;       
    }
};