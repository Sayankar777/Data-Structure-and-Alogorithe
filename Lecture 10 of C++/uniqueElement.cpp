#include <iostream>
using namespace std;
int uniqueArray(int arr[], int n)
{
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[] = {2, 3, 2, 3, 1};
    int n = (sizeof(arr)) / sizeof(arr[0]);

    int unique = uniqueArray(arr, n);

    // for (int i = 0; i < n; i++)
    // {
    //     ans = ans ^ arr[i];
    // }

    cout << unique << endl;
}