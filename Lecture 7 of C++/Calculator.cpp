#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "ENTER THE 'A' NUMBER" << endl;
    cin >> a;
    cout << "ENTER THE 'B' NUMBER" << endl;
    cin >> b;
    char op;
    cout << "Enter operation" << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "(a+b = )" << " " << a + b;
        break;
    case '-':
        cout << "(a-b = )" << " " << a - b;
        break;
    case '*':
        cout << "(a*b = )" << " " << a * b;
        break;
    case '/':
        cout << "(a/b = )" << " " << a / b;
        break;
    case '%':
        cout << "(a%b)" << " " << a % b;
        break;
    default:
        cout << "Error";
        break;
    }
    cout << endl;
    return 0;
}