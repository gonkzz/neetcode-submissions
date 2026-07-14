class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, max_ones = 0;
        for (int num : nums) {
            if (num == 1) {
                cnt++;
                if (cnt > max_ones) max_ones = cnt;
            } else {
                cnt = 0;
            }
        }
        return max_ones;       
    }
};