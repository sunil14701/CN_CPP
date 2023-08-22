#include<iostream>
using namespace std;

int main(){
    // F(n) = F(n-1) + F(n-2), 
    // Where, F(1) = F(2) = 1
    int first = 1, second = 1, third= second;
    int n=5;
    cin >> n;
    for(int i=2;i<n;i++){
        third = first + second;
        first = second;
        second = third;
    }
    cout << n <<"th fibo is : " << third<< endl;
    return 0;
}