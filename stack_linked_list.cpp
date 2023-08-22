#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node* newNode(int data){
    Node *node = new Node();
    node->data = data;
    node->next = NULL;
}

Node* top = NULL;
int cnt = 0;
void push(int data){
    Node *node = newNode(data);
    node->next = top;
    top = node;
    cnt++;
}

void pop(){
    if(top == 0){
        cout << "underflow" << endl;
        return;
    }
    cnt--;
    top = top->next;
}

int top_of_stack(){
    return top->data;
}

int size_of_stack(){
    return cnt;
}

int is_empty(){
    return top == NULL ? true:false;
}

void print(){
    Node *temp = top;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    // linkedlist implementaion of stack

    return 0;
}