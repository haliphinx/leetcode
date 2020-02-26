public class Solution {
    public int MaxArea(int[] height) {
        int left = 0;
        int right = height.Length-1;
        int res_size = 0;
        bool flg = true;
        while(left<right){
            flg = true;
            // cout<<left<<":"<<right<<endl;
            if(height[left]>height[right]){
                if(height[right]*(right-left)>res_size){
                    res_size = height[right]*(right-left);
                }
                for(int i = right-1; i>left; i--){
                    if(height[i]>height[right]){
                        flg = false;
                        right = i;
                        break;
                    }
                }
                
            }
            
            
            else{
                if(height[left]*(right-left)>res_size){
                    res_size = height[left]*(right-left);
                }
                for(int i = left+1; i<right; i++){
                    if(height[i]>height[left]){
                        flg = false;
                        left = i;
                        break;
                    }
                }
                
            }
            
            if(flg){
                break;
            }
        }
        
        return res_size;
    }
}