#include<iostream>
using namespace std;
bool cheack (int n)
{
    if (n%2 == 0)
    {
        return true;
    } 
    else {
        return false;
    }
}
int main ()
{
    int n;
    cin >> n;
    if (cheack(n))
    {
        cout << "Even Number" << endl;
    }
    else 
    {
        cout << "Odd Number" << endl;
    }
    return 0;
}