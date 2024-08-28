#include<iostream>
#include<string>

using namespace std;

class bank {
    char name[100], add[100];
    char y;
    int balance, a, x;
    float amount;
public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();
};

void bank::open_account() {
    cout << "Enter your full name: ";
    cin.ignore();
    cin.getline(name, 100);
    cout << "Enter your address: ";
    cin.getline(add, 100);
    cout << "What type of account do you want to open (saving (s) or current (c))? ";
    cin >> y;
    cout << "Enter amount for deposit: ";
    cin >> balance;
    cout << "Your account has been created.\n";
}

void bank::deposit_money() {
    cout << "Enter the amount you want to deposit: ";
    cin >> a;
    balance += a;
    cout << "Total balance: " << balance << endl;
}

void bank::withdraw_money() {
    cout << "Enter the amount you want to withdraw: ";
    cin >> amount;
    if (amount > balance) {
        cout << "Insufficient balance.\n";
    } else {
        balance -= amount;
        cout << "Total balance after withdrawal: " << balance << endl;
    }
}

void bank::display_account() {
    cout << "Full Name: " << name << endl;
    cout << "Address: " << add << endl;
    cout << "Account Type: " << (y == 's' ? "Saving" : "Current") << endl;
    cout << "Balance: " << balance << endl;
}

int main() {
    int ch;
    bank obj;
    char x;
    do {
        cout << "1) Open account\n";
        cout << "2) Deposit money\n";
        cout << "3) Withdraw money\n";
        cout << "4) Display account\n";
        cout << "5) Exit\n";
        cout << "Select an option: ";
        cin >> ch;

        switch (ch) {
            case 1:
                obj.open_account();
                break;
            case 2:
                obj.deposit_money();
                break;
            case 3:
                obj.withdraw_money();
                break;
            case 4:
                obj.display_account();
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid option. Please try again.\n";
        }

        cout << "Do you want to perform another transaction? (y/n): ";
        cin >> x;
    } while (x == 'y' || x == 'Y');

    return 0;
}
