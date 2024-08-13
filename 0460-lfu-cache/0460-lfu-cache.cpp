class Node{
      public:
        int key,cnt,value;
        Node *next;
        Node *prev;
        Node(int key1,int value1){
            key=key1;
            value=value1;
            cnt=1;
        }
    };
struct List{
        int size;
        Node *head,*tail;
        List(){
            head=new Node(0,0);
            tail=new Node(0,0);
            head->next=tail;
            tail->prev=head;
            size=0;
        }
        
        void addFront(Node *node){
            Node * temp=head->next;
            node->next=temp;
            node->prev=head;
            head->next=node;
            temp->prev=node;
            size++;
        }
        void removeNode(Node *node){
            node->next->prev=node->prev;
            node->prev->next=node->next;
            size--;
        }
        
};
class LFUCache {
public:
    
    map<int,Node*> m1;//keyNode;
    map<int,List*> m2;//freqListMap;
    int maxSizeCache;
    int minFreq;
    int curSize;
    LFUCache(int capacity) {
        maxSizeCache=capacity;
        minFreq=0;
        curSize=0;
    }
    void updateFreqListMap(Node *node){
        m1.erase(node->key);
        m2[node->cnt]->removeNode(node);
        //when map for any freq. is empty
        if(node->cnt ==minFreq && m2[node->cnt]->size==0){
            minFreq++;
        }
        List *newnode=new List();
        if(m2.find(node->cnt+1) != m2.end()){
            newnode=m2[node->cnt+1];
        }
        node->cnt+=1;
        newnode->addFront(node);
        m2[node->cnt]=newnode;
        m1[node->key]=node;
        
    }
    int get(int key) {
        if(m1.find(key)!=m1.end()){
            Node *node=m1[key];
            int val=node->value;
            updateFreqListMap(node);
            return val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(maxSizeCache==0){
            return;
        }
        if(m1.find(key)!=m1.end()){
            Node *node=m1[key];
            node->value=value;
            updateFreqListMap(node);
        }
        else{
            if(curSize == maxSizeCache){
                List* list=m2[minFreq];
                m1.erase(list->tail->prev->key);
                m2[minFreq]->removeNode(list->tail->prev);
                curSize--;
            }
            curSize++;
            minFreq=1;
            List* listFreq=new List();
            if(m2.find(minFreq)!=m2.end()){
                listFreq=m2[minFreq];
            }
            Node* node=new Node(key,value);
            listFreq->addFront(node);
            m1[key]=node;
            m2[minFreq]=listFreq;
        }
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */