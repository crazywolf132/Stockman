#include "main.h"

void startUp() {
    cout << "Loading the dataset" << endl;
}

void displayMenu() {
    cout << "Welcome to StockMan" << endl << endl;
    cout << "Please select a choice" << endl << endl;

    cout << "1 -    View Stock" << endl;
    cout << "2 -    Add Stock" << endl;

    cout << "3 -    Edit Stock" << endl << endl;

    cout << "4 -    Issues" << endl << endl;
    cout << "5 -    View transactions" << endl << endl;

    cout << "9 -    Quit" << endl << endl;
}

int main() {

    startUp();
    int choice = 0;

    while (choice != 9) {
        displayMenu();
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 9:
                break;
        }
    }

    return 0;
}