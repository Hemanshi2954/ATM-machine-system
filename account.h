#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
public:
    Account(int accountNumber, double balance); // Constructor
    int getAccountNumber() const { return accountNumber; } // Accessor (const to prevent modification)
    double getBalance() const { return balance; } // Accessor (const to prevent modification)
    // ... Add methods for deposit, withdraw, etc. if needed ...

private:
    int accountNumber;
    double balance;
};

#endif 