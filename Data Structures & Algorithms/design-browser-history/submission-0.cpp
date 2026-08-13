class BrowserHistory {
private:
    vector<string> history;
    int cursor;
public:
    BrowserHistory(string homepage) {
        history.push_back(homepage);
        cursor = 0;
    }
    
    void visit(string url) {
        history.resize(cursor + 1);
        history.push_back(url);
        cursor++;
    }
    
    string back(int steps) {
        cursor = max(cursor - steps, 0);
        return history.at(cursor);
    }
    
    string forward(int steps) {
        int size = history.size();
        cursor = min((int)history.size() - 1, cursor + steps);
        return history.at(cursor);
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */