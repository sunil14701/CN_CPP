#include<iostream>
using namespace std;

int main(){
    // N=5
    // E
    // DE
    // CDE
    // BCDE
    // ABCDE

    int n;
    cin >> n;
    for(int i=n;i>0;i--)
        {
            char rev = 'A'+i-1;
            for(int j=0;j<n-i+1;j++){
                cout << rev++;
            }
            cout << endl;
        }
    return 0;
}