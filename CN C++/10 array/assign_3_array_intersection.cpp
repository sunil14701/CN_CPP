#include<iostream>
#include<cmath>
#include<limits.h>
using namespace std;

int main(){
    int size1, size2;
    cin >> size1 ;
    int arr1[size1];
    for(int i=0;i<size1;i++) cin >> arr1[i];
    cin >> size2;
    int arr2[size2];
    for(int i=0;i<size2;i++) cin >> arr2[i];
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
                arr2[j] = INT_MAX;
                break;
            }
        }
    }
    cout << endl;
    for(auto it:arr2) cout << it << " ";
    return 0;
}
// 4
// 2 6 1 2
// 5
// 1 2 3 4 2

