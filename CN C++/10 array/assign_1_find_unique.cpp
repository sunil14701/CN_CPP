#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; // 2M+1 -> always odd 
        cin >> n;
        int arr[n];
        for(int i=0; i<n ;i++) cin >> arr[i];
        int ans = 0; // using xor
        for(int i=0; i<n; i++) ans = ans^arr[i];
        cout<< ans << endl;

    }
    return 0;
}