#include <iostream>
using namespace std;
void swapArray(int arr[], int n)
{
    int start = 0;
    int next = 1;

    while (next <= (n - 1))
    {
        swap(arr[start], arr[next]);
        start = start + 2;
        next = next + 2;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    swapArray(arr, n);
    printArray(arr, n);
    return 0;
}