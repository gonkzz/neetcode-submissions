class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), r = 0, l = 0;

        while (r < n)
        {
            nums.at(l) = nums.at(r);
            
            while (r < n && (nums.at(r) == nums.at(l))) r++;

            l++;
        }

        return l;
    }
};