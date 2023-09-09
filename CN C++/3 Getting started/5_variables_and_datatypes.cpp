#include<iostream>
using namespace std;

int main(){
    // addition of 2 numbers
    int a = 10;
    int b ;
    b = 7;
    int c = a + b;
    cout << c << endl;

    char ch = 'g';
    cout << ch << endl;

    float f = 2.34;
    cout << f << endl;

    bool t = true;
    cout << t << endl;

    cout << sizeof(true) << " " << sizeof(float) << " " << sizeof(double) << " "<< sizeof(int) <<  endl;

    // hw -> find the simple interest 
    int principal = 1000, time = 2;
    float rate = 10.5;
    float S_I = principal * rate* time/100;
    cout << "simple interest is :" << S_I <<endl;
    return 0;
}