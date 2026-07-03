class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n);

        for (int i = 0; i < n; i++)
        {
            ans.at(i) = nums.at(i);
            ans.at(i + n) = nums.at(i);
        }

        return ans;
    }
};