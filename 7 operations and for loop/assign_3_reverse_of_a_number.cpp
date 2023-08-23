#include<iostream>
using namespace std;

int main(){
    int n ;
    cin >> n;
    int rev = 0;
    cout << n << endl;
    while(n){
        rev = rev*10 + n%10;
        n/=10;
    }
    cout << rev << endl;

    return 0;
}