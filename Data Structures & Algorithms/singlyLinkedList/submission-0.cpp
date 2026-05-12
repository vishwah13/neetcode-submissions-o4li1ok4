struct Node {
    int val;
    Node* next;
    Node(int val) : val(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    int get(int index) {
        int i = 0;
        Node* curr = head;
        while (curr != nullptr) {
            if (i == index) {
                return curr->val;
            }
            curr = curr->next;
            i++;
        }
        return -1;
    }

    void insertHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    
    void insertTail(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = newNode;
    }

    bool remove(int index) {
        if (index < 0 || head == nullptr) return false;
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return true;
        }

        Node* curr = head;
        for (int i = 0; i < index - 1; i++) {
            if (curr == nullptr || curr->next == nullptr) return false;
            curr = curr->next;
        }

        if (curr->next == nullptr) return false;
        Node* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
        return true;
    }

    vector<int> getValues() {
        vector<int> result;
        Node* curr = head;
        while (curr != nullptr) {
            result.push_back(curr->val);
            curr = curr->next;
        }
        return result;
    }
};