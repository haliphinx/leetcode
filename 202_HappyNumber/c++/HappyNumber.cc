class Solution {
public:
    bool isHappy(int n) {
        set<int> seen;
        string numStr;
        while(seen.count(n)==0){
            seen.insert(n);
            numStr = to_string(n);
            n = 0;
            for(auto i:numStr){
                n+=int(i-'0')*int(i-'0');
            }
        }
        
        return n==1;
    }
};