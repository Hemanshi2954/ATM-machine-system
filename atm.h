#ifndef ATM_H
#define ATM_H

#include <iostream>
#include <vector>
#include <string>
#include "account.h" // Include account header

using namespace std;

class ATM {
public:
    ATM(); // Constructor
    void run(); // Main ATM operation loop
private:
    bool authenticate(); // Authenticates user login
    void displayMenu();   // Displays ATM menu options
    void deposit(Account& account);  // Deposits money into an account
    void withdraw(Account& account); // Withdraws money from an account
    void displayBalance(const Account& account) const; // Displays account balance (const method ensures balance isn't modified)

    vector<Account> accounts; // Stores simulated accounts (replace with database connection for real implementation)
};

#endif