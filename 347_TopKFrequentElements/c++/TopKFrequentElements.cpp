class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> cNum;
        vector<int> ans;
        for(auto& i:nums){
            cNum[i]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, Comp> metaQue;
        for(auto& i:cNum){
            metaQue.emplace(i.first,i.second);
        }
        for(;k>0 && !metaQue.empty();k--){
            ans.push_back(metaQue.top().first);
            metaQue.pop();
        }
        
        return ans;
        
    }
    
    struct Comp
    {
        bool operator()(const pair<int,int>& lPr, const pair<int,int>& rPr) const{
            if(lPr.second == rPr.second){
                return lPr.first>rPr.first;
            }
            return lPr.second<rPr.second;
        }
    };
};