#include<bits/stdc++.h>
using namespace std;
#define sz 5
int *arr = new int[sz];
int top = -1; //0empty stack

void push(int data){
    if(top >= sz-1){
         cout << "overflow" <<endl;
         return ;
    }
    arr[++top] = data;
}

void pop(){
    if(top != -1) top--;
    else cout << "underflow";
}

int top_of_stack(){
    if(top == -1){
         cout << "underflow";
         return -1;
    }
    return arr[top];
}

int sizee(){
    return top+1;
}

bool is__empty(){
    if(top == -1) return true;
    return false;
}

void print(){
    cout << "Stack : ";
    for(int i=0;i<=top;i++) cout << arr[i]<<" ";
    cout << endl;
}

int main()
{
    // array implementation
     push(2); print();
     cout << "size : "<<sizee() << endl;
     push(5); print();
     cout << "size : "<<sizee() << endl;
     push(10); print();
     cout << "size : "<<sizee() << endl;
     pop(); print();
     pop(); print();
     push(12); print();
     cout << "top of stack : "<<top_of_stack() << endl; print();
     cout << is__empty() << endl;
     cout << "size : "<<sizee() << endl;
     push(5); print();
     push(5); print();
     push(5); print();
     push(5); print();
     push(5); print();
     push(5); print();
     push(5); print();
     push(5); print();
     push(5); print();
     push(5); print();
     push(5); print();
     push(5); print();
     push(5); print();
     push(5); print();
    return 0;
}