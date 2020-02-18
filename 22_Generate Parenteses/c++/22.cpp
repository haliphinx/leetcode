#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <string>

using namespace std;

int varify(string ss){
    stack<int> mm;
    for (int i=0;i<ss.size();i++){
        if (ss[i]=='('){
            mm.push(1);
        }
        else{
            if(mm.empty()){
                return 0;
            }
            else{
                mm.pop();
            }
        }
    }
    return 1;
}

int count(string ss, int n){
    int num = 0;
    for (int i = 0; i<ss.size();i++){
        if (ss[i]=='('){
            num++;
        }
    }
    if (num>n){
        return 1;
    }
    else if (num<n){
        return -1;
    }
    else{
        return 0;
    }
}

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        queue<string> waiting_list;
        waiting_list.push("(");
        while(!waiting_list.empty()){
            string mid1 = waiting_list.front();
            waiting_list.pop();
            if(mid1.size()==2*n){
                result.push_back(mid1);
            }
            else{
                if(varify(mid1)){
                    if(count(mid1,n)<0){
                        waiting_list.push(mid1+"(");
                        waiting_list.push(mid1+")");
                    }
                    else{
                        waiting_list.push(mid1+")");
                    }
                }
            }
        }
        return result;
    }
};

int main(){
    int n = 3;
    vector<string> res;
    Solution sol;
    res = sol.generateParenthesis(n);
    for (int i = 0;i<res.size();i++){
        cout<<res[i]<<endl;
    }
    return 0;
}