#include <iostream>
using namespace std;

class bank{
    private:
        string name;
        int ano;
        string type;
        int bal;
    public:
        void assign(){
            cout << "Enter name for the depositor: ";
            getline(cin,name);
            cout << "Enter the account number: ";
            cin >> ano;
            cin.ignore();
            cout << "Enter the account type: ";
            getline(cin,type);
            cout << "Enter balance: ";
            cin >> bal;
        }
        void deposit(int amount){
            bal+=amount;
        }
        void withdraw(int amount){
            if (amount<=bal){
                bal-=amount;
                return;
            }
            cout << "Error! Not enough money!"<<endl;
        }
        void display(){
            cout << "User name: " << name << endl;
            cout << "Balance: " << bal << endl;
        }
};

int main(){
    bank u1;
    u1.assign();
    int amount;
    cout << "Enter the amount you would like to add to the balance: " << endl;
    cin >> amount;
    u1.deposit(amount);
    cout << "Enter the amount you would like to withdraw: " << endl;
    cin >> amount;
    u1.withdraw(amount);
    u1.display();
    return 0;
}