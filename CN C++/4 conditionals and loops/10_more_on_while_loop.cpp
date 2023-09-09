#include<iostream>
using namespace std;

int main(){
    // check if number is prime of not
    int n;
    cin >> n;
    if(n==1) cout << "Neither prime nor composite" <<endl;
    else{
        int i=2;
        while(i<n){
            if(n%i==0){
                 cout << "not prime" << endl;
                 break;
            }
            i++;
        }
        if(i==n) cout << "prime" << endl; 
    }
    return 0;
}