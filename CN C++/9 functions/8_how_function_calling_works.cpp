#include<iostream>
using namespace std;

void print_prime(int n){
    for(int i=2;i<=n;i++){
        bool is_prime = true;
        for(int j=2;j<i;j++){
            if(i%j == 0) {
                is_prime=false;
                break;
            }
        }
        if(is_prime) cout << i << " ";
    }
    cout << endl;
}

void B(){
    cout << 5 << endl;
}

void A(){
    cout << 1 << endl;
    B();
    cout << 2 << endl;
}

int main()
{
    // print all number between 2 to n which are prime
    int n;
    cin >> n;
    print_prime(n);

    // how func call works
    cout << 3 << endl;
    A();
    cout << 4 << endl;

    return 0;
}