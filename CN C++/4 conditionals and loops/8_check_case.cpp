#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << " Enter your char : ";
    cin >> ch;
    if(ch>='A' and ch<='Z') cout << 1 << endl;
    else if(ch>='a' and ch<='z') cout << 0 << endl;
    else cout << -1 << endl;
    return 0;
}