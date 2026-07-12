class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size(), rightMax = -1;
        vector<int> ans(n);
        for (int i = n - 1; i >= 0; i--) {
            ans.at(i) = rightMax;
            rightMax = max(rightMax, arr.at(i));
        }
        return ans;
    }
};