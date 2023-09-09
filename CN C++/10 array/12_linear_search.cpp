#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++) if (arr[i] == target) return i;
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, target;
        cout << "Enter the size of the arr: ";
        cin >> n;
        int arr[n];
        cout << "Enter the elements: ";
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << "Enter the target: ";
        cin >> target;
        cout << linear_search(arr, n, target) << endl;
    }
    return 0;
}
// 2
// 7
// 2 13 4 1 3 6 28
// 9
// 5
// 7 8 5 9 5      
// 5

