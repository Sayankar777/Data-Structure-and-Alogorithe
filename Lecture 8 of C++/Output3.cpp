#include <iostream>
using namespace std;
int update (int a)
{
    a = a*a;
    return a;
}
int main ()
{
    int a = 14;
    a = update(a);
    cout << a << endl;
}