typedef pair<int, int> Time;
class Solution {
public:
    
    string largestTimeFromDigits(vector<int>& A) {
        Time t = make_pair(-1,-1);
        Time temp = make_pair(-1,-1);
        sort(A.begin(), A.end());
        string ans;
        
        set<int> idx;
        //Hour1
        for(int h1 = 0; h1<A.size(); h1++){

            if(A[h1]>2){
                break;
            }
            // cout<<"h1:"<<A[h1]<<endl;
            idx.insert(h1);
            
            //Hour2
            for(int h2 = 0; h2<A.size();h2++){
                if(idx.count(h2)){
                    continue;
                }
                // cout<<"h2:"<<A[h2]<<endl;
                idx.insert(h2);
                
                
                //minute1
                for(int m1 = 0; m1<A.size(); m1++){
                    
                    if(idx.count(m1)){
                        continue;
                    }
                    idx.insert(m1);
                    // cout<<"m1:"<<A[m1]<<endl;
                    for(int m2 = 0; m2<A.size(); m2++){
                        if(idx.count(m2)){
                            continue;
                        }
                        // cout<<"m2:"<<A[m2]<<endl;
                        temp = make_pair(A[h1]*10+A[h2],A[m1]*10+A[m2]);
                        // cout<<"here"<<temp.first<<endl;
                        if(validTime(temp)){
                            // cout<<t.first<<":"<<t.second<<";"<<temp.first<<":"<<temp.second<<endl;
                            if(isLarge(t,temp)){
                                t=temp;
                            }
                        }
                    }
                    
                    idx.erase(m1);
                }
                
                idx.erase(h2);
            }
            
            
            idx.erase(h1);
            
        }
        

        if(t.first!=-1){
            string hour = to_string(t.first);
            string min = to_string(t.second);
            if(hour.size()==1){
                hour = "0"+hour;
            }
            
            if(min.size()==1){
                min="0"+min;
            }
            ans = hour+":"+min;
        }
        
        return ans;
    }
    
private:
    bool validTime(Time& t){
        if((t.first<24)&&(t.second<60)){
            return true;
        }
        return false;
    }
    
    bool isLarge(Time& t, Time& temp){
        if(t.first<temp.first){
            return true;
        }
        if((t.first=temp.first)&&(t.second<temp.second)){
            return true;
        }
        return false;
    }
};