#include <iostream>
#include <string>

using namespace std;

class BankUser {
    
private:
    int pin;  

public:
    string name;
    int balance;
    int bank_number;

    void initializeAccount() {
        cout << " 》Enter Name: ";
        cin >> name;
        cout << " 》Enter Bank Number: ";
        cin >> bank_number;
        cout << " 》Enter Initial Balance ( More Than ₹500 ) : ";
        cin >> balance;
        cout << " 》Set a 4-digit PIN: ";
        cin >> pin;
    }

    bool isSufficientBalance(int withdraw_amount) {
        return withdraw_amount <= balance && (balance-withdraw_amount)>500 ;
    }

    bool validatePin(int enteredPin) {
        return pin == enteredPin;
    }

    void deposit(int deposit_amount) {
        balance += deposit_amount;
        cout << "Deposited Amount: " << deposit_amount << "\n"
             << "Current Balance: " << balance << endl;
    }

    void withdraw(int w_amount) {
        if (isSufficientBalance(w_amount)) {
            balance -= w_amount;
            cout << "Withdrawn Amount: " << w_amount << "\n"
                 << "Current Balance: " << balance << endl;
        } else {
            cout << "[ WARNING !!!!!! ] : Insufficient Balance, Can't Withdraw.\n[ Account Must Contain At least ₹ 500 ]"<<endl;
        }
    }

    void displayBalance() {
        cout << " ● Account Holder Name  : " << name << endl;
        cout << " ● Account Bank Number  : " << bank_number << endl;
        cout << " ● Account Bank Balance : ₹" << balance << endl;
    }

    static int search(BankUser users[], int n, int target) {
        for (int i = 0; i < n; i++) {
            if (target == users[i].bank_number) {
                return i;
            }
        }
        return -1; 
    }
};

int main() {
    cout << "\t\t [ SANJIVANI BANK INTERNATIONAL (SBI) ]\n\n\n";
    int numberOfUsers;
    cout << " 》Enter the number of users: ";
    cin >> numberOfUsers;

    BankUser users[numberOfUsers];

    for (int i = 0; i < numberOfUsers; i++) {
        cout << "\nInitializing account for user " << i + 1 << ":\n";
        users[i].initializeAccount();
    }

    int choice;
    do {
        cout << "\nOperation Menu:\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice != 4) {
            int target;
            cout << "Enter Bank Number: ";
            cin >> target;
            int index = BankUser::search(users, numberOfUsers, target);

            if (index != -1) {
                int enteredPin;
                cout << " 》Enter your 4-digit PIN: ";
                cin >> enteredPin;

                if (users[index].validatePin(enteredPin)) {
                    switch (choice) {
                    case 1: {
                        int amount;
                        cout << " 》Enter Amount To Deposit: ";
                        cin >> amount;
                        users[index].deposit(amount);
                        break;
                    }
                    case 2: {
                        int w_amount;
                        cout << " 》Enter Amount To Withdraw: ";
                        cin >> w_amount;
                        users[index].withdraw(w_amount);
                        break;
                    }
                    case 3:
                        cout << "\n~~~~~~~Account Details:~~~~~~~\n";
                        users[index].displayBalance();
                        break;
                    default:
                        cout << "[ WARNING !!!!! ] : Invalid choice. Please try again.\n";
                    }
                } else {
                    cout << "[ WARNING !!!!! ] : Incorrect PIN. Operation failed.\n";
                }
            } else {
                cout << "[ WARNING ! ] : User not found with the provided bank number.\n";
            }
        }
    } while (choice != 4);

    
    return 0;
}
