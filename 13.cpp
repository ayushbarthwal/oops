#include <iostream>
using namespace std;

class SavingsAccount {
private:
    double savingsBalance; 
    static double annualInterestRate; 

public:
    SavingsAccount(double initialBalance) : savingsBalance(initialBalance) {}

    static void modifyInterestRate(double newRate) {
        annualInterestRate = newRate;
    }

    void calculateMonthlyInterest() {
        double monthlyInterest = (savingsBalance * annualInterestRate) / 12;
        savingsBalance += monthlyInterest;
    }

    void displayBalance() const {
        cout << "Rs " << savingsBalance << endl; 
    }

    static double getAnnualInterestRate() {
        return annualInterestRate;
    }
};

double SavingsAccount::annualInterestRate = 0.0;

int main() {
    SavingsAccount saver1(2000.00);
    SavingsAccount saver2(3000.00);

    SavingsAccount::modifyInterestRate(0.04);
    cout << "Annual Interest Rate: " << SavingsAccount::getAnnualInterestRate() * 100 << "%" << endl;

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "New balance for saver 1: ";
    saver1.displayBalance();
    cout << "New balance for saver 2: ";
    saver2.displayBalance();

    SavingsAccount::modifyInterestRate(0.05);
    cout << "\nAnnual Interest Rate: " << SavingsAccount::getAnnualInterestRate() * 100 << "%" << endl;

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "New balance for saver 1 after interest rate change: ";
    saver1.displayBalance();
    cout << "New balance for saver 2 after interest rate change: ";
    saver2.displayBalance();

    return 0;
}
