class LRUCache {
public:
    struct Node{
        int key,value;
        Node* next;
        Node* prev;
        Node(int k,int v){
            key=k;
            value=v;
            prev=nullptr;
            next=nullptr;
        }
    };
    int capacity_;
    unordered_map<int,Node*> mpp;
    Node* head;
    Node* tail;
    LRUCache(int capacity) {
        capacity_=capacity;
        head= new Node(-1,-1);
        tail=new Node(-1,-1);
        head->next=tail;
        tail->prev=head;
    }
    void removeNode(Node* node){
        Node* after=node->next;
        Node* before=node->prev;
        before->next=after;
        after->prev=before;
    }
    void insertNode(Node * node){
        Node* afterHead=head->next;
        head->next=node;
        node->prev=head;
        node->next=afterHead;
        afterHead->prev=node;
    }
    int get(int key) {
        if(mpp.find(key)==mpp.end()) return -1;
        Node* node=mpp[key];
        removeNode(node);
        insertNode(node);
        return node->value;
    }
    
    void put(int key, int value) {
        if(mpp.find(key)!=mpp.end()){
            Node* node=mpp[key];
            node->value=value;
            removeNode(node);
            insertNode(node);
            return;
        }
        if(mpp.size()==capacity_){
            Node* lru=tail->prev;
            removeNode(lru);
            mpp.erase(lru->key);
            delete lru;
        }
        Node* node= new Node(key,value);
        insertNode(node);
        mpp[key]=node;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */