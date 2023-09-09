#include<iostream>
using namespace std;

int main(){

    int r_or = 15 | 30;
    cout << r_or << endl;

    int r_and = 15 & 30;
    cout << r_and << endl;

    int r_not = 15;
    cout << ~r_not << endl;

    int r_xor = 15 ^ 30;
    cout << r_xor << endl;

    int r_left_shift = 15 << 2;
    cout << r_left_shift << endl;

    int r_right_shift = 15 >> 2;
    cout << r_right_shift << endl;
    return 0;
}