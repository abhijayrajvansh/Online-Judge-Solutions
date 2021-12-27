/**
 *    author:   abhijayrajvansh
 *    created:  24.11.2021 10:53:16
**/
#include <bits/stdc++.h>

using namespace std;
#define nl '\n'

struct Node {
    int data;
    struct Node* next;
};


// Routine to allocate memory required for a Node, set its value
// and return pointer to this newly allocated memory
struct Node* createNode(int val) {
    struct Node* temp = new Node;
    temp->data = val;
    temp->next = NULL;
    return temp;
}


// Function to enter a node with data "val" at the 
// end of a linked list with head pointer at "head"
struct Node* insertAtEndLL(int val, struct Node* head) {
    struct Node* newNode = createNode(val);

    if(head == NULL)
        return newNode;

    struct Node* trav = head;
    while(trav->next != NULL)
        trav = trav->next;
    trav->next = newNode;
    return head;
}


// Function to delete the last node of
// a linked list with head pointer at "head"
Node* deleteAtEndLL(Node* head) {
    // Linked list is empty
    if(head == NULL) {
        cout << "Linked list is empty!" << endl;
        return head;
    }

    // Linked list contains exactly 1 element
    if(head->next == NULL) {
        free(head);
        return NULL;
    }

    // Linked contains atleast 2 elements
    Node* trav = head;
    // trav ptr points to second last node
    while(trav->next->next != NULL)
        trav = trav->next;
    
    // Delete the last node
    free(trav->next);
    trav->next = NULL;
    return head;
}


// Function to enter a node with data "val" at the 
// beginning of a linked list with head pointer at "head"
struct Node* insertAtBeginLL(int val, struct Node* head) {
    struct Node* newNode = createNode(val);
    newNode->next = head;
    return newNode;
}


// Function to delete the first node of
// a linked list with head pointer at "head"
Node* deleteAtBeginLL(Node* head) {
    // Linked list is empty
    if(head == NULL) {
        cout << "Linked list is empty!" << endl;
        return head;
    }
    Node* temp = head;
    free(temp);
    return head->next;
}


// Function to enter a node with data "val" at the position "pos" 
// of a linked list with head pointer at "head"
Node* insertAtNthPosLL(int val, int pos, Node* head) {
    struct Node* newNode = createNode(val);
    if(pos==1) {
        newNode->next = head;
        return newNode;
    }
    Node* trav = head;
    for(int i=0; i<pos-2; i++) 
        trav = trav->next;
    newNode->next = trav->next;
    trav->next = newNode;
    return head;
}


// Delete the (pos)th node 
// of a linked list with head pointer at "head"
struct Node* deleteNthNodeLL(int pos, struct Node* head) {
    struct Node* trav = head;
    if(pos == 1){
        head = head->next;
        free(trav);
        return head;
    }
    for(int i=0; i<pos-2; i++) 
        trav = trav->next;
    struct Node* temp = trav->next;
    trav->next = temp->next;
    free(temp);
    return head;
}


// returns the number of nodes in the linked list
// denoted by head pointer "head"
int countNodesLL(struct Node* head) {
    struct Node* trav = head;
    int count = 0;
    while(trav != NULL) {
        count ++;
        trav = trav->next;
    }
    return count;
}


// Delete (pos)th node from the end in the linked list
// denoted by head pointer "head"
struct Node* deleteNthNodeEndLL(int pos, struct Node* head) {
    return deleteNthNodeLL(countNodesLL(head)-pos+1, head);
}


// Delete (pos)th node from the end in the linked list
// denoted by head pointer "head" USING 1 PASS of linked list
struct Node* deleteNthNodeEndLL2(int pos, struct Node* head) {
    struct Node* trav1 = head;
    struct Node* trav2 = head;
    for(int i=0; i<pos+1; i++) {
        if(trav1 == NULL) {
            // Delete first node
            return deleteAtBeginLL(head);
        }
        trav1 = trav1->next;
    }
    // inc both pointers till trav1 becomes NULL
    while(trav1!=NULL) {
        trav1 = trav1->next;
        trav2 = trav2->next;
    }
    // trav2 points to (pos+1)th node from the back
    struct Node* temp = trav2->next;
    trav2->next = temp->next;
    free(temp);
    return head;
}


// reverse the linked list denoted by head pointer "head"
struct Node* reverseLL(struct Node* head) {
    // Linked list contains 0 or 1 elements 
    if(head == NULL || head->next == NULL)
        return head;

    struct Node* prevPtr = NULL;
    struct Node* trav = head;

    // using head as a temporary variable to store pointers
    while(trav!=NULL) {
        head = trav->next;
        trav->next = prevPtr;
        prevPtr = trav;
        trav = head;
    }
    return prevPtr;
}

int JP(int m, struct Node* head){
    struct Node* p;
    int c = 0;
    while(head->next != head){
        c = 1;
        while(c != m){
            p = head;
            head = head->next;
            c++;
        }cout << head->data << endl;
        head = head->next;
        free(p->next);
        p->next = head;
    }
    cout << "winner is " << head->data << endl;
    return 0;
}


// Function to display a linked list with head pointer "head"
void displayLL(struct Node* head) {
    struct Node* trav = head;
    while(trav != NULL) {
        cout << trav->data << " ";
        trav = trav->next;
    }
    cout << endl;
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Node* head = NULL;
    for(int i = 1; i <= 12; i++){
        head = insertAtEndLL(i, head);
    }

    displayLL(head);

    return 0;
}