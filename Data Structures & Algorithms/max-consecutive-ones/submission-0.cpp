class Solution {
   public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0, consec_ones = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums.at(i) == 1) {
                counter++;
            } else {
                consec_ones = max(counter, consec_ones);
                counter = 0;
            }
        }
        consec_ones = max(counter, consec_ones);

        return consec_ones;
    }
};