#include<iostream>
using namespace std;

int main(){
    // pattern1 
    // N=4
    // 1
    // 23
    // 345
    // 4567
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        int start = i+1;
        for(int j=0;j<=i;j++){
            cout << start++;
        }
        cout << endl;
    }
    return 0;
}