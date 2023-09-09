#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int even=0, odd=0;
    while(n){
        int last_digit = n%10;
        if(last_digit%2==0) even+=last_digit;
        else odd+=last_digit;
        n = n/10;
    }
    cout << even <<" " << odd << endl;
    return 0;
}