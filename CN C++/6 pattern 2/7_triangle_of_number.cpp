#include<iostream>
using namespace std;

int main(){
    // N =4
    //    1
    //   232
    //  34543
    // 4567654

    int n;
    cin >> n;

    // method 1
    for(int i=0;i<n;i++){
        int start = i+1;
        for(int j=0;j<n-i-1;j++) cout << " " ;
        for(int j=0;j<i;j++) cout << start++;
        cout<< 2*i+1;
        for(int j=0;j<i;j++) cout << --start;
        cout << endl;
    }
    cout << endl;

    // method 2
    for(int i=0;i<n;i++){
        int start = i+1;
        for(int j=0;j<n-i-1;j++) cout << " " ;
        for(int j=0;j<=i;j++) cout << start++;
        start-=2;
        for(int j=0;j<i;j++) cout << start--;
        cout << endl;
    }
    return 0;
}