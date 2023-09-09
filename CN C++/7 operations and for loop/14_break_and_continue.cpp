#include <iostream>
using namespace std;

int main()
{

    // find prime with break statement
    // int n = 29;
    // // cin >> n;
    // int i=2;
    // bool divided= false;
    // while(i<n){
    //     if(n%i==0) {
    //         divided = true;
    //         break; // comes out from nearest loop
    //     }
    //     i++;
    // }
    // if(divided) cout << " not a prime number "<< endl;
    // else cout << "Prime number "<< endl;

    // guess my pattern
    // int n = 4;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << j;
    //         if (j == i)
    //             break;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // continue
    int i = 1;
    while (i < 10)
    {
        cout << i << " ";
        if (i == 4)
            break;
        i++;
    }
    cout << endl;
    // int j = 1;
    // while (j < 10)
    // {
    //     cout << j << " ";
    //     if (j == 4)
    //         continue; // infine loop incase of while
    //     j++;
    // }
    cout << endl;
    for (int i = 1; i <= 10; i++)
    {
        if (i == 7)
            continue; // no infinit lopp 
        ;
        cout << i << " ";
    }
    return 0;
}