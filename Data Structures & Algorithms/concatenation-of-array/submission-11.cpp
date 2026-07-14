class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n * 2);
        for (int i = 0; i < nums.size(); i++) {
            ans.at(i) = ans.at(n + i) = nums.at(i); 
        }
        return ans;
    }
};