#include <iostream>
using namespace std;
bool isPrime(int n)
{
    bool defe = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            defe = 0;
            break;
        }
    }
    if (defe == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << "It is Prime Number" << endl;
    }
    else
    {
        cout << "It is not a Prime Number" << endl;
    }
    return 0;
}