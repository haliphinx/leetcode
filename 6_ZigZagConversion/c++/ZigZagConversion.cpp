class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<2){
            return s;
        }
        string res = "";
        vector<string> sub_strs(numRows, "");
        int row_idx;
        for(int i = 0; i<s.size(); i++){
            row_idx = i%(2*numRows-2);
            if(row_idx<numRows){
                sub_strs[row_idx]+=s[i];
            }
            else{
                // row_idx -= numRows;
                row_idx = 2*numRows-row_idx-2;
                sub_strs[row_idx]+=s[i];
            }
        }
        for(int i = 0; i<numRows; i++){
            res+=sub_strs[i];
        }
        return res;
    }
};