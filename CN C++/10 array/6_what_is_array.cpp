#include <iostream>
using namespace std;

int main()
{
    // take array input from user
    int n;
    cin >> n;

    int arr[n];    // avoid this
    int arr2[100]; // for now dont care of extra space wastage
    // int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr2[i];
    for (int i = 0; i < 10; i++)
        cout << arr2[i] << " :";
    return 0;
}