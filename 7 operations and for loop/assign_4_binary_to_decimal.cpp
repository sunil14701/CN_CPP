#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int pow = 1;
    int ans = 0;
    while (n)
    {
        int last_dig = n % 10;
        ans += pow * last_dig;
        pow *= 2;
        n/=10;
    }
    cout << "decimal is : " << ans;

    return 0;
}