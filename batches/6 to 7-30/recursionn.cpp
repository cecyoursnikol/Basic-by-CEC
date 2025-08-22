#include <iostream>
using namespace std;

void printCountdown(int n) {
    if (n == 0) {
        cout << "Done!" << endl; // Base case
    } else {
        cout << "Counting: " << n << endl;
        printCountdown(n - 1); // Recursive call in else
    }
}	

int main() {
    int number;
    cout << "Enter a number to start countdown: ";
    cin >> number;

    printCountdown(number); // Call function with user input
    return 0;
}

