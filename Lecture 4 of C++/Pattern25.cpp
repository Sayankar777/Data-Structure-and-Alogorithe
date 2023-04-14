/*Output
1 2 3 4
  2 3 4
    3 4
      4 */
#include<iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int i = 1;

    while (i<=n) {
        int space = i-1;
        while (space) {
            cout << " ";
            space = space - 1;
        }
        int j = n-i+1;
        int value = i;
        while (j>0) {
            cout << value;
            value = value + 1;
            j = j - 1;
        }
        cout << endl;
        i = i + 1;
    }
}