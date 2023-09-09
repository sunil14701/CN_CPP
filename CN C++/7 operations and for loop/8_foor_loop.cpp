#include <iostream>
using namespace std;

int main()
{
    // print 1 to n
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    // print m to n
    int m1 = 4;
    int n1 = 13;
    for (int i = m1; i <= n1; i++)
        cout << i << " ";
    cout << endl; 
    for (; m1 <= n1; m1++)
        cout << m1 << " ";
    cout << endl;

    // check if prime of not
    int num = 8;
    cin >> num;
    int i = 2;
    for (; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "false";
            break;
        }
    }
    if (i == num)
        cout << "True";
    return true;

    return 0;
}