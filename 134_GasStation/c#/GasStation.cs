public class Solution {
    public int CanCompleteCircuit(int[] gas, int[] cost) {
        if(gas.Length == 0){
            return -1;
        }
        
        int ans = 0;
        int totalDif = 0;
        int restGas = 0;
        
        for(int i = 0; i<gas.Length; i++){
            totalDif+=gas[i]-cost[i];
            restGas+=gas[i]-cost[i];
            if(restGas<0){
                restGas = 0;
                ans = i+1;
            }
        }
        
        return totalDif<0?-1:ans;
    }
}