#include<iostream>
using namespace std;

int main(){
    int a = 10;
    cout << ++a << endl; //11
    cout << a++ << endl;// 11
    cout << a << endl;// 12
    cout << --a << endl;// 11
    cout << a-- << endl;// 11
    return 0;
}