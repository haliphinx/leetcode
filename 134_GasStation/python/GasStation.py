class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        if len(gas) == 0:
            return -1

        
        dif = [gas[i]-cost[i] for i in range(len(gas))]
        
        if sum(dif)<0:
            return -1
        
        
        rest = 0
        ans = 0
        for i in range(len(gas)):
            rest+=dif[i]
            if rest<0:
                rest = 0
                ans = i+1
                    
        return ans