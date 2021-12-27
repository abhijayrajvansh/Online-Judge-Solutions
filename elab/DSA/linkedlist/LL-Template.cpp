class Node{
    public:
    int data;
    Node* next;
};

Node* createNode(int val){
    Node* temp = new Node;
    temp->data = val;
    temp->next = NULL;
    return temp;
}

Node* insertNode(int val, Node* head){
    Node* newNode = createNode(val);
    
    if(head == NULL){
        return newNode;
    }

    Node* trav = head;
    while(trav->next != NULL){
        trav = trav->next;
    }
    trav->next = newNode;
    return head;
}

void displayLinkedList(Node* head){
    Node* trav = head;
    cout << "Linked list:"; 
    while(trav != NULL){
        cout << "-->" << trav->data;
        trav = trav->next;
    }
    cout << nl;
}