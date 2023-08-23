#include<iostream>
using namespace std;

int main(){
    char c;
    int cnt = 0;
    cin >> c;// cin ignoeres spaces and new line char and tabs
    while(c!='$'){
        cin >> c ;
        cnt++;
    }
    cout << cnt<< endl;

    // so to gain more control to include spaces we get cin.get();
    char ch;
    int cnt2 = 0;
    ch  = cin.get();// counts spaces, tabs, endline char as well
    while(ch != '$'){
        ch = cin.get();
        cnt2++;
    }
    cout << cnt2 << endl; // tabs is 2 spaces in my compler
    return 0;
}