class MyLinkedList {
private:
    struct Node {
        int val{ };
        Node* next{ };
        Node(int val, Node* next) : val(val), next(next) { }
        Node(int val) : val(val), next(nullptr) { }
    };

    Node* head{ };
    int size{ };

    Node* get_prev(int index) {
        Node* curr = head;
        for (int i = 0; i < index; i++) curr = curr->next;
        return curr;
    }

public:
    MyLinkedList() {
        head = new Node(0);        
        size = 0;
    }
    
    int get(int index) {
        if (index >= size) return -1;
        return get_prev(index)->next->val;
    }

    void addAtIndex(int index, int val) {
        if (index > size) return;
        Node* prev = get_prev(index);
        Node* new_node = new Node(val, prev->next);
        prev->next = new_node;
        size++;
    }
    
    void addAtHead(int val) { addAtIndex(0, val); }
    
    void addAtTail(int val) { addAtIndex(size, val); }
    
    void deleteAtIndex(int index) {
        if (index >= size) return;
        Node* prev = get_prev(index);
        Node* tmp = prev->next;
        prev->next = tmp->next;
        delete tmp;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */