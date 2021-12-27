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

Node* llpushBegin(int val, Node* head){
    Node* newNode = createNode(val);
    newNode->next = head;
    return newNode;
}

void swapNodes(Node** head_ref, int x, int y)
{
  
    if (x == y)
        return;
 
 
    Node *prevX = NULL, *currX = *head_ref;
    while (currX && currX->data != x) {
        prevX = currX;
        currX = currX->next;
    }

    Node *prevY = NULL, *currY = *head_ref;
    while (currY && currY->data != y) {
        prevY = currY;
        currY = currY->next;
    }

    if (currX == NULL || currY == NULL)
        return;
 

    if (prevX != NULL)
        prevX->next = currY;
    else
        *head_ref = currY;
 
    
    if (prevY != NULL)
        prevY->next = currX;
    else
        *head_ref = currX;
 
    Node* temp = currY->next;
    currY->next = currX->next;
    currX->next = temp;
}
void displayLinkedList(Node* head){
    Node* trav = head;
    while(trav != NULL){
        cout << "-->" << trav->data;
        trav = trav->next;
    }
    cout << nl;
}
void solve(){
    Node* head = NULL;
    int n; cin >> n; int val;
    F(n){
        cin >> val; head = llpushBegin(val, head);
    }
    int a, b; cin >> a >> b;
    cout << "before Swapping:";
    displayLinkedList(head);
    swapNodes(&head, a, b);
    cout << "after Swapping:";
    displayLinkedList(head);
}

DriverCode1
DriverCode2