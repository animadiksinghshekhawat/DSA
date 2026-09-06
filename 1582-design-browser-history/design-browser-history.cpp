class BrowserHistory {
    struct Node{
        string url;
        Node* back;
        Node* forward;
        
        Node(string url){
            this->url=url;
            back=nullptr;
            forward=nullptr;
        }
    };
    Node* currentPage;
public:
    BrowserHistory(string homepage) {
        currentPage=new Node(homepage);
    }
    
    void visit(string url) {
        Node* newPage=new Node(url);
        currentPage->forward=newPage;
        newPage->back=currentPage;
        currentPage=newPage;
    }
    
    string back(int steps) {
        while(steps){
            if(currentPage->back) currentPage=currentPage->back;
            else break;
            steps--;
        }
        return currentPage->url;
    }
    
    string forward(int steps) {
        while(steps){
            if(currentPage->forward) currentPage=currentPage->forward;
            else break;
            steps--;
        }
        return currentPage->url;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */