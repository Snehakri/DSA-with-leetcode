class LRUCache {
public:
    class node{
        public:
            int key;
        int val;
        node *next;
        node* prev;
        node(int key1,int value){
            key=key1;
            val=value;
        }
    };
    node *head=new node(-1,-1);
    node *tail=new node(-1,-1);
    unordered_map<int,node*> m;
    int cap;
    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }
    void deletenode(node * currnode){
        currnode->prev->next = currnode->next;
        currnode->next->prev = currnode->prev;
    }
    void insertnode(node * currnode){
        currnode->next=head->next;
        head->next->prev=currnode;
        head->next=currnode;
        currnode->prev=head;
    }
    int get(int key) {
        if(m.find(key)!=m.end()){
            node *currnode=m[key];
            int res=currnode->val;
            m.erase(key);
            deletenode(currnode);
            insertnode(currnode);
            m[key]=head->next;
            return res;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end()){
            node *currnode=m[key];
            m.erase(key);
            deletenode(currnode);
        }
        if(m.size()==cap){
            m.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        insertnode(new node(key,value));
        m[key]=head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */