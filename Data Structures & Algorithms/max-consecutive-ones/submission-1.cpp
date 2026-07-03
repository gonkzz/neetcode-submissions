class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int global_counter = 0;
        int local_counter = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums.at(i) == 1) local_counter++;
            else {
                global_counter = local_counter > global_counter ? local_counter : global_counter;
                local_counter = 0;
            }
        }       
        global_counter = local_counter > global_counter ? local_counter : global_counter;
        return global_counter; 
    }
};