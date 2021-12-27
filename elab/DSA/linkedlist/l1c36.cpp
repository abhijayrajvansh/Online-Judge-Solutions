/**
 *    author: abhijayrajvansh  created: 26.11.2021 14:21:28
**/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
void abhijayrajvansh (){}

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

bool check(Node* head, int key){
    Node* trav = head;
    while(trav){
        if(trav->data == key){
            return true;
        }
        trav = trav->next;
    }
    return false;
}

void displayLinkedList(Node* head, int key){
    Node* trav = head;
    if(!check(head, key)){
        cout << "Invalid Node! ";
    }
    cout << "Linked List:"; 
    while(trav != NULL){
        if(trav->data == key){
            cout << "->" << trav->data;
            break;
        }
        cout << "->" << trav->data;
        trav = trav->next;
    }
    cout << nl;
}

Node* llpushBegin(int val, Node* head){
    Node* newNode = createNode(val);
    newNode->next = head;
    return newNode;
}
int main (){
    
    int n;
    cin >> n;
    int val;
    Node* head = NULL;
    for(int i = 0; i < n; i++){
        cin >> val;
        head = llpushBack(val, head);
    }
    int lastNode;
    cin >> lastNode;
    displayLinkedList(head, lastNode);
    return 0;
}