#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int lottery[5], user[5];
    int matchCount = 0;

    // Seed the random number generator
    srand(time(NULL));

    // Generate 5 random numbers between 0 and 9
    for (int i = 0; i < 5; i++) {
        lottery[i] = rand() % 10;

        cout << "Enter lottery number " << i + 1 << " (0-9): ";
        cin >> user[i];
    }

    // Compare numbers
    for (int i = 0; i < 5; i++) {
        if (lottery[i] == user[i]) {
            matchCount++;
        }
    }

    // Display results
    cout << "\nLottery Numbers: ";
    for (int i = 0; i < 5; i++) {
        cout << lottery[i] << " ";
    }

    cout << "\nYour Numbers:    ";
    for (int i = 0; i < 5; i++) {
        cout << user[i] << " ";
    }

    cout << "\nYou matched " << matchCount << " number(s)!" << endl;

    return 0;
}