/**
 *    author: abhijayrajvansh  created: 23.11.2021 10:09:07
**/
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
void abhijayrajvansh(){
    cout << "" << nl;
}
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

int count(Node* head, int search_for){
    Node* trav = head;
    int count = 0;
    while(trav){
        if(trav->data == search_for){
            count++;
        }
        trav = trav->next;
    }
    return count;
}

int main () {
    Node* head = NULL;
    int n; cin >> n; int arr[100];
    for(int i = 0; i < n; i++){cin >> arr[i];} 
    for(int i = n - 1; i >= 0; i--){
        head = insertNode(arr[i], head);
        // reverse input
    }
    int num; cin >> num;
    displayLinkedList(head);
    cout << "Count of " << num << ":" << count(head, num) << nl;
    return 0;
}