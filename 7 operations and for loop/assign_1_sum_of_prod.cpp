#include<iostream>
using namespace std;

int main(){
    int n;
    char choice;
    cin >> n >> choice;
    if(choice == '1'){
        int sum = 0;
        for(int i=1;i<=n;i++){
            sum += i;
        }
        cout << sum << endl;
    }else if(choice == '2'){
        int prod = 1;
        for(int i=1;i<=n;i++) prod*=i;
        cout << prod << endl;
    }else cout << -1 << endl;
    return 0;
}