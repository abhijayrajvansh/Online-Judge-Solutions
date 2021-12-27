/**
 *    author: abhijayrajvansh  created: 23.11.2021 09:56:42
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
void search(Node* head, int key){
    Node* trav = head;
    while(trav){
        if(trav->data == key){
            cout << "Yes" << nl;
            return;
        }
        trav = trav->next;
    }
    cout << "No" << nl;
}

int main (){
    int n; cin >> n;
    int val;
    Node* head = NULL;
    for(int i = 0; i < n; i++){
        cin >> val;
        head = insertNode(val, head);
    }
    int key; cin >> key;
    search(head, key);
    return 0;
}