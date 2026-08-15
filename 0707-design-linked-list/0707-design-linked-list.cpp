class MyLinkedList {
public:

    struct Node {
        int data;
        Node* next;

        Node(int val) {
            data = val;
            next = nullptr;
        }
    };

    Node* head;

    MyLinkedList() {
        head = nullptr;
    }
    
    int get(int index) {
        if (index < 0)
            return -1;

        Node* temp = head;

        for (int i = 0; i < index; i++) {
            if (temp == nullptr)
                return -1;

            temp = temp->next;
        }

        if (temp == nullptr)
            return -1;

        return temp->data;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);

        newNode->next = head;
        head = newNode;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;

        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
    }
    
    void addAtIndex(int index, int val) {
        if (index < 0)
            return;

        if (index == 0) {
            addAtHead(val);
            return;
        }

        Node* temp = head;

        
        for (int i = 0; i < index - 1; i++) {
            if (temp == nullptr)
                return;

            temp = temp->next;
        }

        
        if (temp == nullptr)
            return;

        Node* newNode = new Node(val);

        newNode->next = temp->next;
        temp->next = newNode;
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || head == nullptr)
            return;

        if (index == 0) {
            Node* del = head;
            head = head->next;
            delete del;
            return;
        }

        Node* temp = head;

        for (int i = 0; i < index - 1; i++) {
            if (temp == nullptr)
                return;

            temp = temp->next;
        }

        
        if (temp == nullptr || temp->next == nullptr)
            return;

        Node* del = temp->next;
        temp->next = del->next;

        delete del;
    }
};