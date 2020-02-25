class Solution {
public:
    int myAtoi(string str) {
        if(str.size() == 0){
            return 0;
        }
        while(str[0] == ' '){
            if(str.size()==1){
                return 0;
            }
            str = str.substr(1,str.size()-1);
        }
        
        int sign;
        if(str[0] == '+'){
            if(str.size()==1){
                return 0;
            }
            str = str.substr(1,str.size()-1);
            sign = -1;
        }
        else if(str[0] == '-'){
            if(str.size()==1){
                return 0;
            }
            str = str.substr(1,str.size()-1);
            sign = 1;
        }
        else if(str[0]>='0' && str[0]<='9'){
            sign = -1;
        }
        else{
            return 0;
        }
        
        if(str[0]<'0' || str[0]>'9'){
            return 0;
        }
        
        int res = -(str[0]-'0');
        if(str.size()==1){
            return res*sign;
        }
        else{
            str = str.substr(1,str.size()-1);
        }
        
        while(str[0]>='0' && str[0]<='9'){
            if(res<(INT_MIN+(str[0]-'0'))/10){
                if(sign == -1){
                    return INT_MAX;
                }
                else{
                    return INT_MIN;
                }
            }

            res = 10 * res - (str[0]-'0');

            if(str.size() == 1){
                break;
            }
            else{
                str = str.substr(1,str.size()-1);
            }
        }
        if(res == INT_MIN && sign == -1){
            return INT_MAX;
        }
        return res*sign;
    }
};