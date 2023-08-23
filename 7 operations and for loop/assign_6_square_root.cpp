#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=0;
    for(;i*i<=n;i++);
    cout << i-1 << endl;


    return 0;
}