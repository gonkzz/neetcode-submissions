class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0, r = 0;
        while (r < nums.size()) {
            if (nums.at(r) != val) {
                nums.at(k) = nums.at(r);
                k++; r++;
            }
            else r++;
        }
        return k;
    }
};