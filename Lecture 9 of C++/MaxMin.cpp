#include <iostream>
using namespace std;
int getMax(int arr[], int size)
{
    int maxi = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
        // if (arr[i] > max)
        //{
        //   max = arr[i];
        // }
    }
    // returning max value
    return maxi;
}
int getMin(int arr[], int size)
{
    int mini = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        mini = min(mini, arr[i]);
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
    }
    // returning max value
    return mini;
}
int main()
{
    int size;
    cin >> size;

    int num[100];

    // taking input
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    // int max = getMax(num, 100);
    // int min = getMin(num, 100);

    cout << "Max value is :" << getMax(num, size) << endl;
    cout << "Min value is :" << getMin(num, size) << endl;

    return 0;
}