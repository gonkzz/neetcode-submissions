class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int r = 0;
        int l = 0;
        while (r < size)
        {
            if (nums.at(r) == val)
            {
                r++;
            }
            else
            {
                nums.at(l) = nums.at(r);
                r++;
                l++;
            }
        }

        return l;
    }
};