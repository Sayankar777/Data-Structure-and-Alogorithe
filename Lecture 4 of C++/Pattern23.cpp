/*Output
1 1 1 1
  2 2 2
    3 3
      4*/
#include<iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int i = 1;

    while (i<=n) {
        int space = i - 1;
        while (space>0) {
            cout << " ";
            space = space - 1;
        }
        int j = n-i+1;
        while (j>0) {
            cout << i;
            j = j - 1;
        }
        cout << endl;
        i = i + 1;
    }
}
    