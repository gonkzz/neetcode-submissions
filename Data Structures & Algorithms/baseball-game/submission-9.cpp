class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> score;
        int result{ };
        for  (string op : operations) {
            if (op == "+") {
                int old_top = score.top();
                score.pop();
                int new_top = old_top + score.top();
                score.push(old_top);
                score.push(new_top);
                result += new_top;
            }
            else if (op =="D") {
                score.push(2 * score.top());
                result += score.top();
            }
            else if (op =="C") {
                result -= score.top();
                score.pop();
            }
            else {
                score.push(stoi(op));
                result += score.top();
            }
        }
        return result;
    }
};