class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> u(nums.begin(), nums.end());
        int i = 0;

        for (int num: u)
        {
            nums.at(i++) = num;
        }

        return i;
    }
};