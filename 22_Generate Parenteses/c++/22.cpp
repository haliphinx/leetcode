class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> final_res;
        recursion(final_res, "", n, n);
        return final_res;
    }
    
    void recursion(vector<string> &final_res, string str, int open, int close) {
        if (open) {
            recursion(final_res, str+ "(", open - 1, close);
        }
        
        if (close > open) {
            recursion(final_res, str + ")", open, close - 1);
        }
        if (close == 0) {
            final_res.push_back(str);
        }
    }
};