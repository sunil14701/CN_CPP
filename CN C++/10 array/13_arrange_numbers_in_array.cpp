#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int start = 1;
        for(int i=0;i<ceil(n/2.0);i++){
            arr[i] = start++;
            if(i != n-i-1) arr[n-i-1] = start++;
        }
        for(int i=0;i<n;i++) cout << arr[i] <<" ";
    }
    return 0;
}