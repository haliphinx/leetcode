class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, int> store;
        string temp;
        for(auto word:strs){
            temp = word;
            sort(temp.begin(),temp.end());
            if(store.count(temp)){
                ans[store[temp]].push_back(word);
            }
            else{
                store[temp] = ans.size();
                vector<string> t;
                ans.push_back(t);
                ans.back().push_back(word);
            }
        }
        return ans;
    }
};

auto speedup=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();