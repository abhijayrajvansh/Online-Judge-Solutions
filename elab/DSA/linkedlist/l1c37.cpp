/**
 *    author: abhijayrajvansh  created: 28.11.2021 11:33:42
**/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define F(n) for(int i = 0; i < (n); i++)
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

Node* llpopBack(Node* head){
    Node* trav = head;
    while(trav->next->next != NULL){
        trav = trav->next;
    }
    trav->next = NULL;
    return head;
}

void solve(){
    Node* head = NULL;
    int n; cin >> n; int val;
    F(n){
        cin >> val;
        head = llpushBack(val, head);
    }
    int m; cin >> m;
    F(m){
        head = llpopBack(head);
    }
    displayLinkedList(head);
}
DriverCode1
DriverCode2