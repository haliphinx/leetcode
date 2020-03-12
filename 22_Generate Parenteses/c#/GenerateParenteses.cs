public class Solution {
    public IList<string> GenerateParenthesis(int n) {
        List<string> ans = new List<string>();
        recursion(ans,n,n,"");
        return ans;
    }
    
    private void recursion(List<string> ans, int open, int close, string str) {
        if (open>0) {
            recursion(ans, open - 1, close, str+ "(");
        }
        
        if (close > open) {
            recursion(ans, open, close - 1, str + ")");
        }
        if (close == 0) {
            ans.Add(str);
        }
    }
}