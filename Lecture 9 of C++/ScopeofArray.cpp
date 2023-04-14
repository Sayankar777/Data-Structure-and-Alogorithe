#include <iostream>
using namespace std;
void updateArray(int arr[], int n)
{
    cout << "Inside the Function" << endl;

    // Updating array first element
    arr[0] = 120;

    // printing the array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Goning back to the main function" << endl;
}
int main()
{
    int arr[3] = {1, 2, 3};

    updateArray(arr, 3);

    // printing the array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}