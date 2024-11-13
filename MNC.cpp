#include <iostream>
using namespace std;

int main() {
    int i = 2;
    int no;
    int count = 0;

    cout << "Enter a number" << endl;
    cin >> no;

    while (i < no) {
        if (no % i == 0) {
            cout << "Factor: " << i << endl;
            count++;
        }
        i++;
    }

    if (count == 0)
        cout << "Prime number" << endl;
    else
        cout << "Not a prime number" << endl;

    return 0;
}
