#include<iostream>
using namespace std;

long long raise_to_power(int base, int pow){
    long long int ans = 1;
    while(pow--){
        ans = ans*base*1ll;
    }
    return ans;
}

int main(){
    int x, n;
    cin >> x >> n;
    cout << raise_to_power(x,n) << endl; 
    return 0;
}