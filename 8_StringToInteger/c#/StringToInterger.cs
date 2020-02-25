public class Solution {
    public int MyAtoi(string str) {
        if(str.Length == 0){
            return 0;
        }
        while(str[0] == ' '){
            if(str.Length==1){
                return 0;
            }
            str = str.Substring(1);
        }
        
        int sign;
        if(str[0] == '+'){
            if(str.Length==1){
                return 0;
            }
            str = str.Substring(1);
            sign = -1;
        }
        else if(str[0] == '-'){
            if(str.Length==1){
                return 0;
            }
            str = str.Substring(1);
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
        if(str.Length==1){
            return res*sign;
        }
        else{
            str = str.Substring(1);
        }
        
        while(str[0]>='0' && str[0]<='9'){
            if(res<(int.MinValue+(str[0]-'0'))/10){
                if(sign == -1){
                    return int.MaxValue;
                }
                else{
                    return int.MinValue;
                }
            }

            res = 10 * res - (str[0]-'0');

            if(str.Length == 1){
                break;
            }
            else{
                str = str.Substring(1);
            }
        }
        if(res == int.MinValue && sign == -1){
            return int.MaxValue;
        }
        return res*sign;
    }
}