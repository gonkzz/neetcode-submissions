class Solution {
public:
    bool isValid(string s) {
        stack<char> open_bracket;        
        std::unordered_map<char, char> close_to_open {  {')', '('},
                                                        {']', '['},
                                                        {'}', '{'} };
        for (char c : s) {
            if (close_to_open.count(c)) {
                if (!open_bracket.empty() && open_bracket.top() == close_to_open[c]) {
                    open_bracket.pop();
                } else return false;
            }
            else {
                open_bracket.push(c);
            }
        }
        return open_bracket.empty();
    }
};
