class Solution {
public:
    bool isValid(string s) {
        stack<char> meta;
        for(int i = 0; i<s.size(); i++){
            
            if(s[i] == ')'){
                if((!meta.empty())&&(meta.top()=='(')){
                    meta.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i] == ']'){
                if((!meta.empty())&&(meta.top()=='[')){
                    meta.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i] == '}'){
                if((!meta.empty())&&(meta.top()=='{')){
                    meta.pop();
                }
                else{
                    return false;
                }
            }
            else{
                meta.push(s[i]);
            }
        }
        
        if(meta.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};