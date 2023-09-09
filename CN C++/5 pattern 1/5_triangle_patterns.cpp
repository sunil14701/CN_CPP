#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    // p1
    // 1
    // 12
    // 123
    // 1234
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << j+1 << " ";
        }
        cout <<endl;
    }
    cout << endl;
    // p2
    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7

    for(int i=0;i<n;i++){
        int start = i+1;
        for(int j=0;j<=i;j++){
            cout << start++ << " ";
        }
        cout <<endl;
    }
    cout << endl;


    // p3
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    int start = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << start++ << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}