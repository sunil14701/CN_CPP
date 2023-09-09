#include<iostream>
using namespace std;

int main(){
    // n=5
    // 1234554321
    // 1234**4321
    // 123****321
    // 12******21
    // 1********1
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int start = 1;
        for(int j=0;j<n-i;j++) cout << start++;
        for(int j=0;j<2*i;j++) cout << "*";
        for(int j=0;j<n-i;j++) cout << --start;
        cout << endl;

    }
    return 0;
}