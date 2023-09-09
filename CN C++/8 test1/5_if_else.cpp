#include<iostream>
using namespace std;

int main(){
    // N=4
    //    1
    //   212
    //  32123
    // 4321234
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int space = n-i-1;
        int start = i+1;
        for(int j=0;j<space;j++) cout << " ";
        for(int j=0;j<i+1;j++) cout << start--;
        start+=2;
        for(int j=0;j<i;j++) cout << start++;
        cout << endl;
    }
    return 0;
}