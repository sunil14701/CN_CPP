#include<iostream>
using namespace std;
 
int main(){
    char c;
    c = cin.get();
    int lower = 0, digit = 0, space = 0;
    while(c!='$'){
        if(c==' ') space++;
        else if(c >='0' and c<='9') digit++;
        else if(c >='a' and c<='z') lower++;
        c = cin.get();
    }
    cout << lower << " "<< digit << " " << space << endl;
    return 0;
}