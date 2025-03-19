#include <iostream> 
using namespace std;

// Function declarations
double totalRainfall(double rainfalls[]);
double averageRainfall(double rainfalls[]);
double highestRainfall(double rainfalls[]);
double lowestRainfall(double rainfalls[]);
string maxMonth(double rainfalls[], const string months[], double maxValue);
string minMonth(double rainfalls[], const string months[], double minValue);

int main() {
    // Array of months
    const string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    double yearlyRainfall[12];
    
    // Input rainfall data and validate input
    cout << "\nEnter the amount of rainfall for each month: " << endl;
    for (int i = 0; i < 12; i++) {
        while (true) {
            cout << '\n' << months[i] << ": ";
            if (cin >> yearlyRainfall[i] && yearlyRainfall[i] >= 0) { // Ensure input is a non-negative number
                break;
            } else {
                cout << "Invalid input! Please enter a positive number or 0 for the rainfall amount." << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            }
        }
    }

    // Display entered rainfall data
    cout << "\nMonthly Rainfall Data:" << endl;
    for (int i = 0; i < 12; i++) {
        cout << months[i] << ": " << yearlyRainfall[i] << endl;
    }

    // Display total and average rainfall
    cout << "\nTotal rainfall for the year: " << totalRainfall(yearlyRainfall) << endl;
    cout << "\nAverage monthly rainfall: " << averageRainfall(yearlyRainfall) << endl;

    // Find and display the month with the highest and lowest rainfall
    double maxValue = highestRainfall(yearlyRainfall);
    double minValue = lowestRainfall(yearlyRainfall);

    cout << "\nMonth with the highest rainfall: " << maxMonth(yearlyRainfall, months, maxValue) << " with " << maxValue << " units." << endl;
    cout << "\nMonth with the lowest rainfall: " << minMonth(yearlyRainfall, months, minValue) << " with " << minValue << " units." << endl;

    return 0;
}

// Function definitions

double totalRainfall(double rainfalls[]) {
    // Calculate and return the total annual rainfall
    double total = 0;
    for (int i = 0; i < 12; i++) {
        total += rainfalls[i];
    }
    return total;
}

double averageRainfall(double rainfalls[]) {
    // Calculate and return the average monthly rainfall
    double sum = 0;
    for (int i = 0; i < 12; i++) {
        sum += rainfalls[i];
    }
    return sum / 12;
}

double highestRainfall(double rainfalls[]) {
    // Find and return the highest recorded rainfall
    double maxValue = rainfalls[0];
    for (int i = 1; i < 12; i++) {
        if (rainfalls[i] > maxValue) {
            maxValue = rainfalls[i];
        }
    }
    return maxValue;
}

double lowestRainfall(double rainfalls[]) {
    // Find and return the lowest recorded rainfall
    double minValue = rainfalls[0];
    for (int i = 1; i < 12; i++) {
        if (rainfalls[i] < minValue) {
            minValue = rainfalls[i];
        }
    }
    return minValue;
}

string maxMonth(double rainfalls[], const string months[], double maxValue) {
    // Identify and return the month with the highest rainfall
    for (int i = 0; i < 12; i++) {
        if (rainfalls[i] == maxValue) {
            return months[i];
        }
    }
    return ""; // Return an empty string if no match is found
}

string minMonth(double rainfalls[], const string months[], double minValue) {
    // Identify and return the month with the lowest rainfall
    for (int i = 0; i < 12; i++) {
        if (rainfalls[i] == minValue) {
            return months[i];
        }
    }
    return ""; // Return an empty string if no match is found
}