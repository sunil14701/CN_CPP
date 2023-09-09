#include<iostream>
using namespace std;

int main(){
    // n=4
    // 4444
    // 333
    // 22
    // 1

    int n;
    cin >> n;
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            cout << i ;
        }
        cout << endl;
    }

    // 1 2 3 4
    // 1 2 3
    // 1 2 
    // 1
    for(int i=n;i>0;i--){
        int start  = 1;
        for(int j=0;j<i;j++){
            cout << start++  << " ";
        }
        cout << endl;
    }
    return 0;
}