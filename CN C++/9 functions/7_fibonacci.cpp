#include<iostream>
using namespace std;

bool is_fibo_no(int n){
    int first = 0, second = 1, third=0;
    while(third<n){
        third = first + second;
        first = second;
        second = third;
    }
    if(third == n) return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    cout << is_fibo_no(n) << endl;
    return 0;
}