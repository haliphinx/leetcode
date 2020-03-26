public class Solution {
    public bool IsHappy(int n) {
        HashSet<int> seen = new HashSet<int>();
        String numStr;
        while(!seen.Contains(n)){
            seen.Add(n);
            numStr = n.ToString();
            n = 0;
            foreach(var i in numStr){
                n+=(i-'0')*(i-'0');
            }
        }
        
        return n==1;
    }
}