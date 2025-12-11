#include<iostream>
using namespace std;

int main() {
    int number;
    int evennumber = 0;
    int oddnumber = 0;
    cout << "Enter an integer : ";
    cin >> number;
    while(number != 0) {
        if (number % 2 == 0) {
            evennumber++;
        } else {
            oddnumber++;
        }
        cout << "Enter an integer : ";
        cin >> number;
    }
    cout << "#Even numbers = " << evennumber << endl;
    cout << "#Odd numbers = " << oddnumber << endl;

    return 0;
}
