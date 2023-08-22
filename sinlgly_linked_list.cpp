#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next = NULL;
};

// Node * head = NULL; // if we are declaring global head than there is no need to pass head in each function and all the changes will be done to head itself.

// pass by reference
// void insert_at_beginning(Node **ptr_to_head, int data){
//     Node *node = new Node();
//     node->data = data;
//     if(ptr_to_head == NULL){
//         *ptr_to_head = node;
//     }else{
//         node->next = *ptr_to_head;
//         *ptr_to_head = node;
//     }
// }

// pass by value : copy of pointer is passed
Node* insert_at_beginning(Node *head, int data){
    Node *node = new Node();
    node->data = data;
    if(head == NULL){
        head = node;
    }else{
        node->next = head;
        head = node;
    }
    return head; // if the head is not passed by reference 
}

Node* insert_at_nth_pos(Node *head,int pos, int data){
    if(pos <1) return head;
    Node* node = new Node();
    node->data = data;

    if(pos == 1){
        node->next = head;
        head = node;
    }else{
        int step = pos - 2;
        Node *temp = head;
        while(temp->next and step--) temp = temp -> next;
        node->next = temp->next;
        temp->next = node;
    }
    return head;
}

Node* insert_at_end(Node *head,int data){
    Node *node = new Node();
    node ->data = data;
    if(head == NULL) head = node;
    else{
        Node *temp = head;
        while(temp->next) temp = temp->next;
        temp->next = node;
    }
    return head;
}

Node* delete_nth_node(Node *head,int pos){
    if(pos < 1) return head;
    if(pos == 1) head = head->next;
    else{
        int step = pos -2;
        Node *temp = head;
        while(temp->next->next and step--) temp = temp->next;
        temp->next = temp->next->next;
    }
    return head;
}

Node* reverse_list(Node *head){
    if(head == NULL) return head;
    Node *prev = NULL, *curr = head, *n=head->next;
    while(curr){
        curr->next = prev;
        prev = curr;
        curr = n;
        if(n) n = n->next;
    }
    return prev;
}

Node* reverse_list_rec(Node *head){
    // base conditon
    if(head->next == NULL) return head;

    // assumption
    Node *temp = reverse_list_rec(head->next);

    // small work
    head->next->next = head;
    head->next = NULL;
    return temp;
}

void print_list(Node *head){
    cout << " the elements in linked list are : ";
    while(head){
        cout << head->data << " ";
        head = head -> next;
    }
    cout << endl;
}

void print_list_rec(Node *head){
    // base case
    if(head == NULL) return;

    // assumption
    cout << head->data << " ";
    
    // smallwork
    print_list_rec(head->next);
} 

void print_list_reverse_rec(Node *head){
    // base case
    if(head == NULL) return;

    // smallwork
    print_list_reverse_rec(head->next);

    // assumption
    cout << head->data << " ";
}



int main(){ 
    Node * head = NULL; // now we have to pass head to each function and in each function each head will be local variable for that function.

// dummy list
    // head = insert_at_beginning(head, 1); 
    // head = insert_at_beginning(head, 2); 
    // head = insert_at_beginning(head, 3); 
    // head = insert_at_beginning(head, 4); 
    // head = insert_at_beginning(head, 5); 
    // print_list(head);


// add at begiinning
    // int size ;
    // cout << "how many numbers you want to enter : ";
    // cin >> size;
    // while(size--){
    //     cout << "Enter your number : ";
    //     int num;
    //     cin >> num;
    //     head = insert_at_beginning(head, num); 
    //     // insert_at_beginning(&head, num); // use double pointer when pass by ref
    //     print_list(head);   
    // }

// add at nth pos    
    // head = insert_at_nth_pos(head, 1,2);
    // head = insert_at_nth_pos(head, 2,3);
    // head = insert_at_nth_pos(head, 1,4);
    // head = insert_at_nth_pos(head, 2,5);
    // print_list(head);
    
// add at end
    head = insert_at_end(head,2);
    head = insert_at_end(head,4);
    head = insert_at_end(head,6);
    head = insert_at_end(head,8);
    print_list(head);

// delete a nth node 
    // head = delete_nth_node(head,2);
    // print_list(head);

// reversing 
    // head = reverse_list(head);
    // print_list(head);

// reversing ll recursion
    head = reverse_list_rec(head);
    print_list(head);

// print list recursion
    // cout << "normal : "; 
    // print_list_rec(head);
    // cout<<endl;
    // cout<<"reversed : ";
    // print_list_reverse_rec(head);
    // cout << endl;

    return 0;
}