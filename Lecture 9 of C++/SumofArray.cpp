#include <iostream>
using namespace std;
// int sum(int arr[], int n)
// {
//     int sum = 0;
//     // Sum of array element
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];
//     }
//     return sum;
// }
int main ()
{
    int n;
    cin >> n;

    int arr[100];
    
    // inputfrom user
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
    } 
     
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    
    cout << sum << endl;
}