#include <iostream>
using namespace std;

int main()
{
    int n, reverse = 0, r;
    for (int i = 1; i <= n; i++)
    {
        cin >> n;
        for (; n > 0; n = n / 10)
        {
            r = n % 10;
            reverse = reverse * 10 + r;
        }
        cout << reverse << endl;
    }
    return 0;
}
