/**
 *    author: abhijayrajvansh  created: 23.11.2021 08:40:07
**/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

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

void reverseLL(Node * head){
    Node* trav = head;
    Node *prev = NULL, *next = NULL;
    while(trav != NULL){
        next = trav->next;
        trav->next = prev;
        prev = trav;
        trav = next;
    }
    head = prev;
}

void GetNth(Node* head, int index){
    index--;
    Node* trav = head;
    int temp = index;
    index++;
    while(temp--){
        trav = trav->next;
    }
    cout << "Node at index=" << index << ":";
    cout << trav->data << nl;
}

int main () {
    Node* head = NULL;
    int n; cin >> n; int arr[100];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = n - 1; i >= 0; i--){
        head = insertNode(arr[i], head);
    }
    int index; cin >> index;
    displayLinkedList(head);
    GetNth(head, index);
    return 0;
}