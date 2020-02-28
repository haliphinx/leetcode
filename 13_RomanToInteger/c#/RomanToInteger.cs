public class Solution {
    public int RomanToInt(string s) {
        int idx = 0;
        int res = 0;
        
        while(idx<s.Length){
            if(s[idx] == 'M'){
                res+=1000;
                idx+=1;
            }
                
            else if(s[idx] == 'C'){
                if(idx<s.Length-1){
                    if(s[idx+1] == 'M'){
                        res+=900;
                        idx+=2;
                    }
                        
                    else if(s[idx+1] == 'D'){
                        res+=400;
                        idx+=2;
                    }
                        
                    else{
                        res+=100;
                        idx+=1;
                    }
                        
                }
                    
                else{
                    res+=100;
                    idx+=1;
                }
                    
            }
                
            else if(s[idx] == 'D'){
                res+=500;
                idx+=1;
            }
                
            
            else if(s[idx] == 'X'){
                if(idx<s.Length-1){
                    if(s[idx+1] == 'C'){
                        res+=90;
                        idx+=2;
                    }
                        
                    else if(s[idx+1] == 'L'){
                        res+=40;
                        idx+=2;
                    }
                        
                    else{
                        res+=10;
                        idx+=1;
                    }
                        
                }
                    
                else{
                    res+=10;
                    idx+=1;
                }
                    
            }
                
            
            else if(s[idx] == 'L'){
                res+=50;
                idx+=1;
            }
                
            
            else if(s[idx] == 'I'){
                if(idx<s.Length-1){
                    if(s[idx+1] == 'X'){
                        res+=9;
                        idx+=2;
                    }
                        
                    else if(s[idx+1] == 'V'){
                        res+=4;
                        idx+=2;
                    }
                        
                    else{
                        res+=1;
                        idx+=1;
                    }
                        
                }
                    
                else{
                    res+=1;
                    idx+=1;
                }
                    
            }
                
            
            else{
                res+=5;
                idx+=1;
            }
                
        }
            
            
        return res;
    }
}