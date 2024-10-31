#include<iostream>
using namespace std;

int main() {
    int ch, no1, no2, res;
    do {
        cout << "Select 1 to add two numbers\nSelect 2 to subtract two numbers\nSelect 0 to stop program\n";
        cin >> ch;
        
        if (ch == 0) {
            cout << "Stopping program\n";
            break;
        }
        
        cout << "Enter two numbers: ";
        cin >> no1 >> no2;
        
        if (ch == 1)
            res = no1 + no2;
        else if (ch == 2)
            res = no1 - no2;
        else {
            cout << "Invalid option\n";
            continue;
        }
        
        cout << "Result: " << res << endl;
    } while (ch != 0);
    
    return 0;
}
