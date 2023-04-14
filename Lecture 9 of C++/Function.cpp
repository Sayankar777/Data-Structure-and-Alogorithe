#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return;
}
int main()
{
    int first[3] = {2, 5, 6};
    printArray(first, 3);
    cout << endl;

    int second[15] = {0};
    printArray(second, 15);
    cout << endl;

    int third[15] = {1, 0};
    printArray(third, 15);
    cout << endl;

    // Size of Array
    // int thirdsize = sizeof(third) / sizeof(int);
    // cout << thirdsize << endl;

    
}