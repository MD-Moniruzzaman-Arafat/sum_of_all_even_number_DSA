#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "number of n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    cout << "sum of total even number : " << sum;

    return 0;
}