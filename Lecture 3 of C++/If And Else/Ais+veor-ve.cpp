#include<iostream>
using namespace std;
int main(){
    int n;
     
    cout << "Enter any number : " << endl; 
    cin >> n;

    if (n>0) {
        cout << "Number is +ve" << endl;
    }
     else if (n<0) {
        cout << "Number is -ve" << endl;
    } else {
        cout << "Number is zero" << endl;
    }

}

    
