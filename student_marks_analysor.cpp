#include <iostream>

using namespace std;


void readMarks(int marks[], int n);
int findTotal(int marks[], int n);
double findAverage(int marks[], int n);
int findHighest(int marks[], int n);
int findLowest(int marks[], int n);
int countPassed(int marks[], int n);
void printReport(int marks[], int n);

int main() {
    char choice;
    
   
    do {
        int n;
        cout << "Enter the number of students (1 to 100): ";
        cin >> n;

        
        while (n < 1 || n > 100) {
            cout << "Invalid count! Please enter a number between 1 and 100: ";
            cin >> n;
        }

        int marks[100];

        
        readMarks(marks, n);

       
        printReport(marks, n);

        cout << "\nDo you want to run the analysis again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you! Exiting program." << endl;
    return 0;
}

// --- Function Definitions ---


void readMarks(int marks[], int n) {
    cout << "Enter the marks for " << n << " students:\n";
    for (int i = 0; i < n; i++) {
        cout << "Student " << (i + 1) << " mark: ";
        cin >> marks[i];
    }
}


int findTotal(int marks[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += marks[i];
    }
    return total;
}


double findAverage(int marks[], int n) {
    if (n == 0) return 0.0;
    
    return (double)findTotal(marks, n) / n;
}


int findHighest(int marks[], int n) {
    int highest = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }
    return highest;
}


int findLowest(int marks[], int n) {
    int lowest = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }
    return lowest;
}


int countPassed(int marks[], int n) {
    int passedCount = 0;
    const int passingMark = 40;
    for (int i = 0; i < n; i++) {
        if (marks[i] >= passingMark) {
            passedCount++;
        }
    }
    return passedCount;
}


void printReport(int marks[], int n) {
    int total = findTotal(marks, n);
    double average = findAverage(marks, n);
    int highest = findHighest(marks, n);
    int lowest = findLowest(marks, n);
    int passed = countPassed(marks, n);
    int failed = n - passed;

    cout << "\n==============================\n";
    cout << "   STUDENT MARKS ANALYSIS     \n";
    cout << "==============================\n";
    cout << "Total Marks  : " << total << endl;
    cout << "Average Mark : " << average << endl;
    cout << "Highest Mark : " << highest << endl;
    cout << "Lowest Mark  : " << lowest << endl;
    cout << "Passed       : " << passed << endl;
    cout << "Failed       : " << failed << endl;
    cout << "==============================\n";
}