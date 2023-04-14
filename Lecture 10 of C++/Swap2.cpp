#include <iostream>
using namespace std;
void swapArray(int arr[], int n)
{
    for (int i = 0;  i < n; i += 2)
    {
        if ((i+1) <= (n-1))
        {
            swap(arr[i], arr[i+1]);
        }
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
    int arr[5] = {2, 5, 6, 7, 8};
    int brr[4] = {5, 6, 7, 8};

    swapArray(arr, 5);
    printArray(arr, 5);

    swapArray(brr, 4);
    printArray(brr, 4);
}