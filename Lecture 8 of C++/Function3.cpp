#include <iostream>
using namespace std;
int fact(int a)
{
    int i = 1;
    int mul = 1;
    for (int i = 1; i <= a; i++)
    {
        mul = mul * i;
    }
    return mul;
}
int nCr(int n, int r)
{
    int ans = fact(n) / ((fact(n - r)) * fact(r));
    return ans;
}
int main()
{
    int n, r;
    cin >> n >> r;
    int ans = nCr(n, r);
    cout << ans << endl;
}