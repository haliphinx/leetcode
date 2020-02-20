class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()<2){
            return s;
        }
        string res = "";
        string meta = "";
        for(int i = 0; i<s.size(); i++){
            meta= FindLongestPal(s,i,i);
            if(meta.size()>res.size()){
                res = meta;
            }
            meta = FindLongestPal(s,i,i+1);
            if(meta.size()>res.size()){
                res = meta;
            }
        }
        if(res.size() == 0){
            res = s.substr(0,1);
        }
        return res;
        
        
    }
    string FindLongestPal(string s, int s1, int s2){
        string res = "";
        while((s1>=0)&&(s2<s.size())){
            if(s[s1] != s[s2]){
                break;
            }
            else{
                res = s.substr(s1,s2-s1+1);
            }
            s1--;
            s2++;
        }
        return res;
    }
};