#include<iostream>
using namespace std;

// int fact(int n){
//     if(n==0) return 1;
//     return n*fact(n-1);
// }

int fact(int n){
    int f = 1;
    for(int i=1;i<=n;i++) f = f*i;
    return f;
}

int ncr(int n, int r){
    return fact(n)*1.0/(fact(r)*fact(n-r));
}

bool check_prime(int n){
    if(n<=0) return false;
    if(n == 1) return false;
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}

void one_to_n(int n=7){
    for(int i=1;i<=n;i++) cout << i << " ";
    cout << endl;
}

int multiply(int a, int b){
    return a*b;
}

int main(){
    int n=4, r;
    // cin >> n >> r;
    // int output = ncr(n,r); 
    // cout <<output << endl;
    // cout <<ncr(n,r) << endl;

    // prime no
    cin >> n;
    cout << check_prime(n) << endl;
    one_to_n(n) ;
    one_to_n() ;


    cout << multiply(4,7) << endl;
    return 0;
}