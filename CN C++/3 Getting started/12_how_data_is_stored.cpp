#include<iostream>
using namespace std;

int main(){
    // typecasting

    // int a = 100;
    // char c = a; // read 100 as char
    // cout << a <<" "<< c << endl;

    
    int a = 1990;
    char c = a; 
    // cout << a <<" "<< c << endl;

    c = 'y';
    a = c;
    cout << a <<" "<< c << endl;

    float f = 1.2;
    a = f;
    c = f;
    cout << f << " " << a << " " << c << endl; 

    int num1 = 10;
    char ch = 'a';
    cout << num1 + ch << endl;
    cout << char(num1 + ch) << endl;



    return 0;
}

