#include<iostream>
using namespace std;

int main(){
    // N=4
// A
// BC
// CDE
// DEFG

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        char start  = i+'A';
        for(int j=0;j<=i;j++){
            cout << start++;
        }
        cout << endl;
    }
    
    return 0;
}