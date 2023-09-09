#include<iostream>
using namespace std;

int main(){
    // n=3
    // A
    // BB
    // CCC

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << char(i+'A');
        }
        cout << endl;
    }
    
    return 0;
}