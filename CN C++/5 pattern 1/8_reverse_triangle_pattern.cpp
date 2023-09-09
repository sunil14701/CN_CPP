#include<iostream>
using namespace std;

int main(){
    // n=4
// 1
// 21
// 321
// 4321

    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int rev = i;
        for(int j=1;j<=i;j++){
            cout << rev--;
        }
        cout << endl;
    }
    return 0;
}