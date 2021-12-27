/**
 *    author:   abhijayrajvansh
 *    created:  25.11.2021 02:39:16
**/
#include <bits/stdc++.h>
using namespace std;

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

Node* llpushBack(int val, Node* head){
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

Node* llpushBegin(int val, Node* head){
    Node* newNode = createNode(val);
    newNode->next = head;
    return newNode;
}

Node* llpopBack(Node* head){
    if(head == NULL){
        cout << "Linked List is empty!" << endl;
        return head;
    }
    if(head->next == NULL){
        free(head);
        return NULL;
    }
    Node* trav = head;
    /*-------------------------------------------------
    trav ptr points to the 2nd last Node*
    --------------------------------------------------*/
    while(trav->next->next != NULL){
        trav = trav->next;
    }
    // deleting the last Node
    trav->next = NULL;
    free(trav->next);

    return head;
}

Node* llpopBegin(Node* head) {
    // Linked list is empty
    if(head == NULL) {
        cout << "Linked list is empty!" << endl;
        return head;
    }
    Node* temp = head;
    free(temp);
    return head->next;
}


void displayLinkedList(Node* head){
    Node* trav = head;
    cout << "Linked list:"; 
    while(trav != NULL){
        cout << "-->" << trav->data;
        trav = trav->next;
    }
    cout << endl;
}

Node* insertAtPos(int val, int pos, Node* head){
    Node* newNode = createNode(val);
    if(pos == 1){
        newNode->next = head;
        return newNode;
    }
    Node* trav = head;
    for(int i = 0; i < pos - 2; i++){
        trav = trav->next;
    }
    newNode->next = trav->next;
    trav->next = newNode;
    return head;
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Node* head = NULL;
    head = llpushBack(1, head);
    head = llpushBack(2, head);
    head = llpushBack(3, head);
    head = llpushBack(4, head);
    head = llpushBack(5, head);

    displayLinkedList(head);
    return 0;
}