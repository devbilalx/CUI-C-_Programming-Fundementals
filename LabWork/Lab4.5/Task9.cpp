#include <iostream>
using namespace std;

int main() {
    int number;
    int count = 0;

    cout << "Enter an integer: ";
    cin >> number;

    if (number < 0) {
        number = -number;
    }

    if (number == 0) {
        count = 1;
    } else {
        while (number > 0) {
            number = number / 10; 
            count=count+1;              
        }
    }

    cout << "number of digits: " << count << endl;
    return 0;
}
