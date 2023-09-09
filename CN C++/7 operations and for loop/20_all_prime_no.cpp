#include<iostream>
using namespace std;

int main(){
    int n =5;
    cin >> n;
    if(n==1) cout << "1 is neither prime nor composite " << endl;
    else {
        for(int i=2;i<=n;i++){
            // is prime
            int j;
            for(j=2;j<i;j++){
                if(i%j==0) break;
            }
            if(j==i) cout << i << " ";
        }
    }
    return 0;
}
