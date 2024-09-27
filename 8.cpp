#include <iostream>
using namespace std;
class Student{
    private:
        int score[5];
        int TotalScore;
    public:
        void input(){
            for (int i = 0; i<5; i++){
                cin >> score[i];
            }
        }
        int calculateTotalScore(){
            TotalScore = 0;
            for (int i = 0; i<5; i++){
                TotalScore += score[i];
            }
            return TotalScore;
        }
};

int main(){
    Student s1;
    int n;
    cin >> n;
    s1.input();
    int counter=0;
    int Anna = s1.calculateTotalScore();
    while (--n){
        s1.input();
        int marks = s1.calculateTotalScore();
        if (marks>Anna){
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}