class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
// k el != val, first k el in nums
// return num el != val

        int l = 0, r = 0;
        while (r < nums.size()) {
            if (nums.at(r) != val) {
                nums.at(l) = nums.at(r);
                l++; r++;
            }
            else r++;
        }
        return l;
    }
};