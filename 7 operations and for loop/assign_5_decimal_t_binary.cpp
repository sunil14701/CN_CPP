#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << n << endl;
    long long int ans = 0;
    long long int zero = 0;
    bool flag = 0;
    while (n)
    {
        bool rem = n % 2;
        if(flag == 0 and rem == 0) zero++;
        else flag=1;
        
        ans = ans * 10 + rem;
        n = n / 2;
    }

    long long int rev = 0;
    while (ans)
    {
        rev = rev * 10 + ans % 10;
        ans /= 10;
    }
    while (zero--)
        rev = rev * 10;
    cout << rev << endl;

    return 0;
}