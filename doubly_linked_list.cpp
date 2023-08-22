#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next = NULL;
    Node *prev = NULL;
};

Node* newNode(int data){
    Node *node = new Node();
    node->data = data;
    return node;
}

Node* insert_at_head(Node *head, int data){
    Node *node = newNode(data);
    if(head == NULL) head = node;
    else {
        node->next = head;
        head->prev = node;
        head = head->prev;
    }
    return head;
}

Node* insert_at_tail(Node *head, int data){
    Node *node = newNode(data);
    if(head == NULL) head = node;
    else{
        Node *temp = head;
        while(temp->next) temp = temp->next;
        temp->next = node;
        node->prev = temp;
    }
    return head;
}


void print(Node *head){
    cout << " the elements are :";
    while(head){
        cout << head->data << " ";
        head = head -> next;
    }
    cout << endl;
}

void reverse_print(Node *head){
    while(head->next){
        head = head -> next;
    }   
    cout << "Reverse print : ";
    while(head){
        cout << head->data << " ";
        head = head->prev;
    }
    cout << endl;
}

int main(){
    // we can create a node this way also
    Node mynode;
    mynode.data = 45; // this way is local varibale creation. it will be cleared from memory when funtion call will finish. local variable lives in stack section of memory. so that is why use space in heap section. it is called dynamic memory. anything is heap is not cleared unless we clear it

    Node *head = NULL;

// dummy doubly linked list
    // head = insert_at_head(head, 11);
    // head = insert_at_head(head, 12);
    // head = insert_at_head(head, 13);
    // head = insert_at_head(head, 14);
    // head = insert_at_head(head, 15);

    head = insert_at_tail(head, 1);
    head = insert_at_tail(head, 2);
    head = insert_at_tail(head, 3);
    head = insert_at_tail(head, 4);
    head = insert_at_tail(head, 5);

    print(head);
    reverse_print(head);
    return 0;
}