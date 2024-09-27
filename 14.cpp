#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0) : real(r), img(i) {}

    Complex operator+(const Complex& other) {
        return Complex(real + other.real, img + other.img);
    }

    Complex operator-(const Complex& other) {
        return Complex(real - other.real, img - other.img);
    }

    bool operator==(const Complex& other) {
        return (real == other.real) && (img == other.img);
    }

    void display() const {
        cout << real;
        if (img >= 0) 
            cout << " + " << img << "i";
        else 
            cout << " - " << -img << "i";
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    cout << "Complex Number 1: ";
    c1.display();
    cout << endl;

    cout << "Complex Number 2: ";
    c2.display();
    cout << endl;

    cout << "Sum: ";
    sum.display();
    cout << endl;

    cout << "Difference: ";
    diff.display();
    cout << endl;

    if (c1 == c2) {
        cout << "c1 is equal to c2" << endl;
    } else {
        cout << "c1 is not equal to c2" << endl;
    }

    return 0;
}
