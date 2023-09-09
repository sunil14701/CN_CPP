#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; cnt < n; i++)
    {
        int ap = 3 * i + 2;
        if (ap % 4 != 0)
        {
            cout << ap << " ";
            cnt++;
        }
    }

    return 0;
}