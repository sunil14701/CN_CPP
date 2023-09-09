#include<iostream>
using namespace std;

int main(){
    // p1
    // A B C D
    // A B C D
    // A B C D
    // A B C D
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << char(j+'A')<< " ";
        }
        cout << endl;
    }
    cout << endl;

    // P2
    // A B C D
    // B C D E
    // C D E F
    // D E F G
    for(int i=0;i<n;i++){
        char start = i + 'A';
        for(int j=0;j<n;j++){
            cout << start++ << " ";
        }
        cout << endl;
    }
    return 0;
}