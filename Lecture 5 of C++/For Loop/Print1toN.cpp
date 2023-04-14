#include<iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter any number" << endl;
    cin >> n;

    // for (int i=1; i<=n; i++) {
    //     cout << i << " ";
    // }

    int i = 1;
    for (; ; ) {
        if (i<=n) {
            cout << i << " ";
        } else {
            break;
        }

        i = i + 1;
    }
}