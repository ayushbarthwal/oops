#include <iostream>
using namespace std;

class shape{
    public:
        int calculatearea(int s){
            return s*s;
        }
        int calculatearea(int l, int b){
            return l*b;
        }
        float calculatearea(float b, float h){
            return 0.5 * b* h;
        }
};

int main(){
    int s,l,b;
    float base, height;
    shape sh;
    cout << "Enter side: ";
    cin >> s;
    cout << sh.calculatearea(s) << endl;
    cout << "Enter length and breadth: ";
    cin >> l;
    cin >> b;
    cout << sh.calculatearea(l,b)<< endl;
    cout << "Enter base and height: ";
    cin >> base;
    cin >> height;
    cout << sh.calculatearea(base,height)<< endl;
    return 0;
}