#include<iostream>
using namespace std;

int main(){
    // n=5
    //   *
    //  ***
    // *****
    //  ***
    //   *
    int n;
    cin >> n;
    if(n%2==1){
        int k=0;
        for(int i=1;i<=n;i+=2){
            int spaces = n/2;
            for(int j=0;j<spaces-k;j++) cout<<" ";
            for(int j=0;j<i;j++) cout << "*";
            cout << endl;
            k++;
        }
        if(n>2){
            int space = 1;
            for(int i=n-2;i>0;i-=2){
                for(int j=0;j<space;j++) cout <<" ";
                for(int j=0;j<i;j++) cout <<"*";
                cout << endl;
                space++;
            }   
        }
        
    }

    return 0;
}