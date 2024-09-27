#include <iostream>
#include <conio.h>
using namespace std;

class Tollbooth{
    private:
        unsigned int carcount;
        double cashtotal;
    public:
        Tollbooth(){
            carcount = 0;
            cashtotal = 0.0;
        }
        void payingCar(){
            carcount++;
            cashtotal += 0.5;
        }
        void nonPayCar(){
            carcount++;
        }
        void display(){
            cout << "Car count is: " << carcount << endl;
            cout << "Cash total is: " <<cashtotal << endl;
        }
};

int main(){
    char ch;
    Tollbooth t;
    while(true){
        ch = _getch();
        if ((ch=='P')||(ch=='p')){
            t.payingCar();
            cout << "Paying car counter" << endl;
        }
        else if ((ch=='N')||(ch=='n')){
            t.nonPayCar();
            cout << "Non-Paying car counter" << endl;
        }
        else if (ch==27){
            t.display();
            break;
        }
        else{
            printf("Invalid input");
        }
    }
    return 0;
}