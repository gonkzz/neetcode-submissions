class MyLinkedList {
private:
    struct ListNode {
        int value;
        ListNode* next;
        ListNode(int val) : value(val), next(nullptr) { }
    };

public:
    ListNode* head;
    int size{ };
    MyLinkedList() { 
        head = new ListNode(0); 
        size = 0;
    }
    
    int get(int index) {
        if (index >= size) return -1;
        ListNode* curr = head->next;
        for (int i = 0; i < index; i++) curr = curr->next;
        return curr->value;
    }
    
    void addAtHead(int val) {
        ListNode* new_node = new ListNode(val);
        new_node->next = head->next;
        head->next = new_node;
        size++;
    }
    
    void addAtTail(int val) {
        ListNode* curr = head;
        while (curr->next) curr = curr->next;
        ListNode* new_node = new ListNode(val);
        curr->next = new_node;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        ListNode* new_node = new ListNode(val);
        ListNode* curr = head;
        for (int i = 0; i < index; i++) curr = curr->next;
        new_node->next = curr->next;
        curr->next = new_node;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if (index >= size) return;
        ListNode* curr = head;
        for (int i = 0; i < index; i++) curr = curr->next;
        ListNode* tmp = curr->next;
        curr->next = tmp->next;
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