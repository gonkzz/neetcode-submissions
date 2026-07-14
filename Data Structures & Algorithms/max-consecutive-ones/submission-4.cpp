class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, max_ones = 0;
        for (int num : nums) {
            cnt = num ? cnt + 1 : 0;
            if (cnt > max_ones) max_ones = cnt;
        }
        return max_ones;       
    }
};