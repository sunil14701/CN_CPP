#include<iostream>
using namespace std;

int main(){
    // N=4
    // 1
    // 22
    // 333
    // 4444

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << i+1<<"";
        }
        cout << endl;
    }
    return 0;
}