class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n{ (int)arr.size() };
        vector<int> res(n);
        int max_el{ -1 };
        for (int i = n - 1; i >= 0; i--) {
            res.at(i) = max_el;
            max_el = max(max_el, arr.at(i));
        }
        return res;
    }
};