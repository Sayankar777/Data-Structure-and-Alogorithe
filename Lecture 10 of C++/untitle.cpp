#include <iostream>
using namespace std;
void getProductArrayExceptSelf(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int mul[3] = {1, 1, 1};
        for (int j = (i + 1); j < n; j++)
        {
            mul[i] = mul[i] * arr[j];
        }
        cout << mul[i];
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    getProductArrayExceptSelf(arr, n);
    return 0;
}