class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int max_el = -1;
        vector<int> res(n);
        for (int i = n - 1; i >= 0; i--) {
            res.at(i) = max_el;
            max_el = max(max_el, arr.at(i));
        }
        return res; 
    }
};