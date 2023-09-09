#include<iostream>
using namespace std;

int print2largest(int arr[], int n) {
    int max = -1, sec_max = -1;
    for(int i=0;i<n;i++){
        if(max < arr[i]){
            sec_max = max;
            max = arr[i];
        }
        if(sec_max < arr[i] and arr[i] != max){
            sec_max = arr[i];
        }
    }
    return sec_max;
}

int main(){
    int n;
    cin >> n;
    int max = INT_MIN;
    if(n==0 or n==1) return max;
    // numbers can contain duplicates
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    cout << "second_largest :" << print2largest(arr,n)<< endl; 

    return 0;
}