#include<iostream>
using namespace std;
int main (){
    char ch ;
    cin >> ch;

    if ('a' < ch < 'z') {
        cout << "This is Lower case" << endl;
    } else if ('A' < ch <'Z') {
        cout << "This is Upper case" << endl;
    } else if (0 < ch < 9) {
        cout << "This Numaric Value" << endl;
    }
}