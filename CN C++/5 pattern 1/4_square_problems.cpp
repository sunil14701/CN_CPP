#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // p1
    // 1111
    // 2222
    // 3333
    // 4444
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << i+1<< " ";
        }
        cout <<endl;
    }
    cout << endl;

    // p2
    // 1234
    // 1234
    // 1234
    // 1234
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << j+1<< " ";
        }
        cout <<endl;
    }
cout << endl;
    // p3
    // 4321
    // 4321
    // 4321
    // 4321
    for(int i=0;i<n;i++){
        for(int j=n;j>0;j--){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}