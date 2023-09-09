#include<iostream>
using namespace std;

int main(){
    // P1
    // *
    // * *
    // * * *
    // * * * *
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }

    // p2
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++) cout << "  ";
        for(int j=0;j<=i;j++) cout << "* ";
        cout << endl;
    }

    // p3
    // *             *
    // * *         * *
    // * * *     * * *
    // * * * * * * * *
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++) cout << "* ";
        
        for(int j=0;j<n-i-1;j++) cout << "  ";
        for(int j=0;j<n-i-1;j++) cout << "  ";
        for(int j=0;j<=i;j++) cout << "* ";
        cout << endl;
    }
    cout << endl;

    // p4
    int times = 4;
        while(times--){
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++) cout << "* ";
        for(int j=0;j<n-i;j++) cout <<"  ";
        for(int j=0;j<n-i;j++) cout <<"  ";
        for(int j=0;j<i;j++) cout << "* ";
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++) cout << "* ";
        
        for(int j=0;j<n-i-1;j++) cout << "  ";
        for(int j=0;j<n-i-1;j++) cout << "  ";
        for(int j=0;j<=i;j++) cout << "* ";
        cout << endl;
    }
        }

    return 0;
}