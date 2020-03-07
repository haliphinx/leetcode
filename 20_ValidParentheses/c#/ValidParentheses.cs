public class Solution {
    public bool IsValid(string s) {
        Stack<char> meta = new Stack<char>();
        for(int i = 0; i<s.Length; i++){
            
            if(s[i] == ')'){
                if((meta.Count>0)&&(meta.Peek()=='(')){
                    meta.Pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i] == ']'){
                if((meta.Count>0)&&(meta.Peek()=='[')){
                    meta.Pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i] == '}'){
                if((meta.Count>0)&&(meta.Peek()=='{')){
                    meta.Pop();
                }
                else{
                    return false;
                }
            }
            else{
                meta.Push(s[i]);
            // Console.WriteLine(meta.Peek());
            }
        }
        
        if(meta.Count==0){
            return true;
        }
        else{
            return false;
        }
    }
}