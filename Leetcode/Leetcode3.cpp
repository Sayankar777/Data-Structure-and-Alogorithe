#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i <= 30; i++)
    {
        int num = pow(2, i);
        if (n == num)
        {
           return true;
        }
        else
        {
            return false;
        }
    }
}