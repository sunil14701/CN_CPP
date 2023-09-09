#include <bits/stdc++.h>
using namespace std;

int main(){

    // farinite to celcius
    // int far;
    // cin >> far;
    // int cel = (5/9) * (far-32);
    // cout << cel << endl;

    // int far;
    // cin >> far;
    // int cel = (5.0/9) * (far-32);
    // float cel2 = (5.0/9) * (far-32);
    // cout << cel <<" " << cel2 <<endl;

    // comparison operators
    int a,b;
    cin >> a >> b;
    bool is_equal = (a==b);
    bool is_greater = (a>b);
    bool is_lesser = (a<b);
    cout << "is_equal" << " " << is_equal<<endl;
    cout << "is_greater" << " " << is_greater<<endl;
    cout << "is_lesser" << " " << is_lesser<<endl;
    cout << "not_equal" << " " << !is_equal << endl; 
    return 0;
}