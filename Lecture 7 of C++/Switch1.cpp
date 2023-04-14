#include <iostream>
using namespace std;
int main()
{
    int n = 2;
    char ch = 'A';

    switch (n)
    {
    case 1:
        cout << "First" << endl;
        cout << "Again first" << endl;
        break;
    case 'A':
        switch (n)
        {
        case 2:
            cout << " Second";
        }
        break;
    default:
        cout << "Its is default case" << endl;
    }

    cout << endl;
    return 0;
}