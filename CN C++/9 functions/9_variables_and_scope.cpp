#include<iostream>
using namespace std;

int fact(int n){ // n ka scope bhi fact ke bracket tak hi hai
    // cout << a << endl; //a ka scope main tak hi hai but fact ke andar nhi hai
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans*i;
    }
    return ans;
}

int main(){
     int a;
     cin >> a ;
     int output = fact(a);
    //  cout << n << endl;
    //  cout << ans << endl;// ans variable ka scope khatam ho gaya hai
     cout << output << endl;
    return 0;
}