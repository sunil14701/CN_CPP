#include<iostream>
using namespace std;

int main(){
    // n=4
    //    1
    //   12
    //  123
    // 1234
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++) cout<<" ";
        for(int j=0;j<=i;j++) cout << j+1;
        cout << endl;
    }
    return 0;
}