#include <iostream>
using namespace std;
void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = (n-1);

    while (start <= end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
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
int main ()
{
    int arr[5] = {1,5,6,8,4};
    reverseArray(arr,5);
    printArray(arr,5);
}