class MyLinkedList {
private:
    struct ListNode {
        int val{ };
        ListNode* next;
        ListNode(int val) : val(val), next(nullptr) { }
    };

    ListNode* head;
    int size{ };

public:
    MyLinkedList() {
        head = new ListNode(0);
        size = 0;
    }
    
    int get(int index) {
        if (index >= size) return -1;
        ListNode* curr = head->next;
        for (int i = 0; i < index; i++) curr = curr->next;
        return curr->val;
    }
    
    void addAtHead(int val) {
        ListNode* new_head = new ListNode(val);
        new_head->next = head->next;
        head->next = new_head;
        size++;
    }
    
    void addAtTail(int val) {
        ListNode* new_node = new ListNode(val);
        ListNode* curr = head;
        while (curr->next) curr = curr->next;
        curr->next = new_node;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index > size) return;
        ListNode* curr = head;
        for (int i = 0; i < index; i++) curr = curr->next;
        ListNode* new_node = new ListNode(val);
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