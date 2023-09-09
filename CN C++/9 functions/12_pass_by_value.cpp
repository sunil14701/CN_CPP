#include<iostream>
using namespace std;

void increment(int n){
    n = n+1; // increment ka n
}

int increment_1(int n){
    n = n+1;
   return n;
}

int main(){
    // pass by value mein changes reflect nhi honge bcos we are passing by value 
    int n = 10;//main ka n
    increment(n);
    cout << n << endl; // n will not change
    n = increment_1(n); // pass by value , main decide karge ki change karvna hai main ke variable mein ya nhi
    cout << n << endl;
    return 0;
}