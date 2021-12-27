/**
 *    author: abhijayrajvansh  created: 06.12.2021 23:38:57
**/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define F(n) for(int i = 0; i < (int)(n); i++)
#define DriverCode1 int main (){ int TT = 1; //cin >> TT;
#define DriverCode2 while(TT--){solve();}}
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

void displayLinkedList(Node* head){
    Node* trav = head;
    cout << "Linked List:"; 
    while(trav != NULL){
        cout << "->" << trav->data;
        trav = trav->next;
    }
    cout << nl;
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
int pos = 1;
bool check (Node* head, int val){
    Node* trav = head;
    while(trav){
        if(trav->data == val){
            return true;
        }
        pos++;
        trav = trav->next;
    }
    return false;
}

void solve(){
    Node* head = NULL;
    int n; cin >> n; int val;
    for(int i = 0; i < n; i++){
        cin >> val;
        head = llpushBack(val, head);
    }
    int checkData; cin >> checkData;
    int newData; cin >> newData;
    bool finalCheck = check(head, checkData);
    if(finalCheck){
        head = insertAtPos(newData, pos, head);
        displayLinkedList(head);
    }
    else{
        cout << "Node not found!" << nl;
        displayLinkedList(head);
    }
}

DriverCode1
DriverCode2