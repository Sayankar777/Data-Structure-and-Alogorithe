#include <iostream>
using namespace std;
bool search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[5] = {1, 2, 3, -4, -5};

    int key;
    cin >> key;
    bool found = search(arr, 5, key);

    if (found)
    {
        cout << "yes";
    }
    else
    {
        cout << "No";
    }
}