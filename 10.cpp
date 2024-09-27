#include <iostream>
using namespace std;
class Invoice{
    private:
        string partNumber;
        string partDescription;
        int quantity;
        double price_per_item;
    public:
        Invoice(string pN, string pD, int qty, double price){
            setpartNumber(pN);
            setpartDescription(pD);
            setquantity(qty);
            setprice(price);
        }
        string setpartNumber(string part){
            partNumber = part;
        }
        string getpartNumber(){
            return partNumber;
        }
        string setpartDescription(string description){
            partDescription = description;
        }
        string getpartDescription(){
            return partDescription;
        }
        int setquantity(int q){
            quantity = q;
        }
        int getquantity(){
            return quantity;
        }
        double setprice(int p){
            price_per_item = p;
        }
        double getprice(){
            return price_per_item;
        }
        double getInvoiceAmount(){
            return quantity*price_per_item;
        }
};
int main(){
    Invoice Invoice("G902", "Gaming Mouse", 50, 19.99);
    cout << "Part Number: " << Invoice.getpartNumber() << endl;
    cout << "Part Description: " << Invoice.getpartDescription() << endl;
    cout << "Quantity: " << Invoice.getquantity() << endl;
    cout << "Price per Item: $" << Invoice.getprice() << endl;
    cout << "Invoice Amount: $" << Invoice.getInvoiceAmount() << endl;
    return 0;
}