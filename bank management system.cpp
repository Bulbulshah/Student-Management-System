#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

using namespace std;

// Structure to hold account information
struct Account {
    int accountNumber;
    string name;
    double balance;
};

// Function prototypes
void createAccount(Account accounts[], int& accountCount, int maxAccounts);
void viewAccounts(const Account accounts[], int accountCount);
void depositAmount(Account accounts[], int accountCount);
void withdrawAmount(Account accounts[], int accountCount);
void saveAccountsToFile(const Account accounts[], int accountCount, const string& filename);
void loadAccountsFromFile(Account accounts[], int& accountCount, int maxAccounts, const string& filename);

// Exception class for account-related errors
class AccountException : public runtime_error {
public:
    AccountException(const string& message) : runtime_error(message) {}
};

int main() {
    const int maxAccounts = 100;
    Account accounts[maxAccounts];
    int accountCount = 0;
    string filename = "accounts.txt";

    // Load accounts from file
    loadAccountsFromFile(accounts, accountCount, maxAccounts, filename);

    int choice;
    do {
        cout << "\n=== Bank Management System ===\n";
        cout << "1. Create Account\n";
        cout << "2. View Accounts\n";
        cout << "3. Deposit Amount\n";
        cout << "4. Withdraw Amount\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        try {
            switch (choice) {
                case 1:
                    createAccount(accounts, accountCount, maxAccounts);
                    break;
                case 2:
                    viewAccounts(accounts, accountCount);
                    break;
                case 3:
                    depositAmount(accounts, accountCount);
                    break;
                case 4:
                    withdrawAmount(accounts, accountCount);
                    break;
                case 5:
                    saveAccountsToFile(accounts, accountCount, filename);
                    cout << "Data saved. Exiting program.\n";
                    break;
                default:
                    cout << "Invalid choice. Please try again.\n";
            }
        } catch (const AccountException& e) {
            cout << "Error: " << e.what() << endl;
        }
    } while (choice != 5);

    return 0;
}

// Function to create a new account
void createAccount(Account accounts[], int& accountCount, int maxAccounts) {
    if (accountCount >= maxAccounts) {
        throw AccountException("Maximum number of accounts reached.");
    }

    Account newAccount;
    cout << "Enter account number: ";
    cin >> newAccount.accountNumber;
    cout << "Enter account holder name: ";
    cin.ignore();
    getline(cin, newAccount.name);
    cout << "Enter initial balance: ";
    cin >> newAccount.balance;

    if (newAccount.balance < 0) {
        throw AccountException("Initial balance cannot be negative.");
    }

    accounts[accountCount++] = newAccount;
    cout << "Account created successfully!\n";
}

// Function to view all accounts
void viewAccounts(const Account accounts[], int accountCount) {
    if (accountCount == 0) {
        cout << "No accounts to display.\n";
        return;
    }

    cout << "\n=== Account Details ===\n";
    for (int i = 0; i < accountCount; ++i) {
        cout << "Account Number: " << accounts[i].accountNumber << endl;
        cout << "Name: " << accounts[i].name << endl;
        cout << "Balance: " << accounts[i].balance << endl;
        cout << "-------------------------\n";
    }
}

// Function to deposit amount into an account
void depositAmount(Account accounts[], int accountCount) {
    int accountNumber;
    double amount;
    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    if (amount <= 0) {
        throw AccountException("Deposit amount must be positive.");
    }

    for (int i = 0; i < accountCount; ++i) {
        if (accounts[i].accountNumber == accountNumber) {
            accounts[i].balance += amount;
            cout << "Amount deposited successfully.\n";
            return;
        }
    }

    throw AccountException("Account not found.");
}

// Function to withdraw amount from an account
void withdrawAmount(Account accounts[], int accountCount) {
    int accountNumber;
    double amount;
    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount <= 0) {
        throw AccountException("Withdrawal amount must be positive.");
    }

    for (int i = 0; i < accountCount; ++i) {
        if (accounts[i].accountNumber == accountNumber) {
            if (accounts[i].balance < amount) {
                throw AccountException("Insufficient balance.");
            }
            accounts[i].balance -= amount;
            cout << "Amount withdrawn successfully.\n";
            return;
        }
    }

    throw AccountException("Account not found.");
}

// Function to save accounts to a file
void saveAccountsToFile(const Account accounts[], int accountCount, const string& filename) {
    ofstream outFile(filename);
    if (!outFile) {
        throw AccountException("Unable to open file for saving.");
    }

    for (int i = 0; i < accountCount; ++i) {
        outFile << accounts[i].accountNumber << " " << accounts[i].name << " " << accounts[i].balance << "\n";
    }

    outFile.close();
}

// Function to load accounts from a file
void loadAccountsFromFile(Account accounts[], int& accountCount, int maxAccounts, const string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cout << "File not found. Starting with an empty list of accounts.\n";
        return;
    }

    Account account;
    while (inFile >> account.accountNumber) {
        inFile.ignore();
        getline(inFile, account.name, ' ');
        inFile >> account.balance;

        if (accountCount >= maxAccounts) {
            throw AccountException("Maximum number of accounts reached while loading from file.");
        }

        accounts[accountCount++] = account;
    }

    inFile.close();
}
