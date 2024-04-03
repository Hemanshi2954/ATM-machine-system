#include "atm.h"

ATM::ATM() {
    // Initialize simulated accounts (replace with database connection for real implementation)
    accounts.push_back(Account(123456, 1000.00)); // Account number, balance
    accounts.push_back(Account(987654, 500.00));
}

void ATM::run() {
    int choice;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                if (authenticate()) {
                    int accountIndex = findAccount(); // Find user's account
                    if (accountIndex != -1) {
                        displayAccountMenu(accounts[accountIndex]);
                        handleAccountMenu(accounts[accountIndex]);
                    } else {
                        cout << "Account not found." << endl;
                    }
                }
                break;
            case 2:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 2);
}

bool ATM::authenticate() {
    int accountNumber, pin;

    cout << "Enter account number: ";
    cin >> accountNumber;

    cout << "Enter PIN: ";
    cin >> pin;

    // Replace with secure authentication logic (e.g., hashing PIN)
    for (const Account& account : accounts) {
        if (account.getAccountNumber() == accountNumber && account.getPin() == pin) {
            return true;
        }
    }

    cout << "Invalid account number or PIN." << endl;
    return false;
}

void ATM::displayMenu() {
    cout << "\nATM Menu:" << endl;
    cout << "1. Login" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter your choice: ";
}
