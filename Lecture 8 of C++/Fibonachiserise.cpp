#include <iostream>
using namespace std;
//function call
void fibo(int n)
{
    //function body
    int a = 0;
    int b = 1;
    int i = 1;
    cout << a << " " << b << " ";
    while (i <= n)
    {
        int ans = a + b;
        cout << ans << " ";
        a = b;
        b = ans;
        i++;
    }
}
//main function
int main()
{
    int n;
    cin >> n;
    fibo(n);
    return 0;
}