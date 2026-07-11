class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int local_max = 0, global_max = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums.at(i) == 1) local_max++;
            else {
                global_max = global_max > local_max ? global_max : local_max;
                local_max = 0;
            }
        }
        
        global_max = global_max > local_max ? global_max : local_max;
        
        return global_max;
    }
};