#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mask = 0;

    if (n == 0)
    {
        return 0;
    }

    while (n != 0)
    {
        mask = (mask << 1) | 1;
        n = n >> 1;
    }

    int ans = (~n) & mask;
    cout << ans << endl;
}