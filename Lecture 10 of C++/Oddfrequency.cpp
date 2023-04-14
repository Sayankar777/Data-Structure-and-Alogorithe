#include <iostream>
using namespace std;
//bootfoce code it is very bad process
int oddFrequency(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for ( int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count % 2 == 1)
        {
            return arr[i];
        }
    }
    return -1;
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

    cout << "The element with odd frequency is:" << oddFrequency(arr,n);
    return 0;
}