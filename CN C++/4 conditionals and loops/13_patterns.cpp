#include<iostream>
using namespace std;

int main(){
    // 1
    // 1 2 
    // 1 2 3
    // 1 2 3 4
    int n;
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout << j << " ";
            j++;
        }
        i++;
        cout << endl;
    }
    

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    int k=1,num=1;
    while(k<=n){
        int j = 1;
        while(j<=k){
            cout << num++ << " ";
            j++;
        }
        k++;
        cout << endl;
    }

    //     1
    //   2 3
    // 4 5 6
    // n=3
    int val = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++) cout << "  ";
        for(int j=0;j<=i;j++) cout << val++ <<" ";
        cout << endl;
    }    
    return 0;
}