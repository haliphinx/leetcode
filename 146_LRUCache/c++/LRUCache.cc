class LRUCache {
public:
    LRUCache(int capacity) {
        cap = capacity;
        size = 0;
        head = new cacheNode(0);
        tail = new cacheNode(0);
        head->next = tail;
        tail->pre = head;
    }
    
    int get(int key) {
        int ans = -1;
        if(cacheMap.count(key)&&cacheMap[key]!=NULL){
            ans = cacheMap[key]->val;
            cacheMap[key]->pre->next = cacheMap[key]->next;
            cacheMap[key]->next->pre = cacheMap[key]->pre;
            
            cacheMap[key]->next = head->next;
            cacheMap[key]->pre = head;
            
            head->next->pre = cacheMap[key];
            head->next = cacheMap[key];
        }
        return ans;
    }
    
    void put(int key, int value) {
        cacheNode* lastNode;
        
        if(cacheMap.count(key)&&cacheMap[key]!=NULL){
            cacheMap[key]->val = value;
            cacheMap[key]->pre->next = cacheMap[key]->next;
            cacheMap[key]->next->pre = cacheMap[key]->pre;
            
            cacheMap[key]->next = head->next;
            cacheMap[key]->pre = head;
            
            head->next->pre = cacheMap[key];
            head->next = cacheMap[key];
        }
        
        else{
            if(size == cap){
                cacheNode* lastNode = tail->pre;
                cacheMap[lastNode->key] = NULL;
                lastNode->pre->next = tail;
                tail->pre = lastNode->pre;
                lastNode->pre=NULL;
                lastNode->next = NULL;
                size--;
            }

            lastNode = new cacheNode(key,value);
            cacheMap[key] = lastNode;
            lastNode->next = head->next;
            lastNode->pre = head;
            head->next->pre = lastNode;
            head->next = lastNode;
            size++;
        }
    }
    
private:
    struct cacheNode{
        int val;
        int key;
        cacheNode* pre;
        cacheNode* next;
        cacheNode(int key=0, int val = 0){
            this->key = key;
            this->val = val;
            pre = NULL;
            next = NULL;
        }
    };
    
    unordered_map<int, cacheNode*> cacheMap;
    
    int cap, size;
    cacheNode *head, *tail;

};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */