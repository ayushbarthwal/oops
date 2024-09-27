#include <iostream>
using namespace std;

class Time{
    private:
        int seconds;
        int minutes;
        int hours;

    public:
        Time() : seconds(0), minutes(0), hours(0) {};
        Time(int h, int m, int s) {
            setTime(h, m, s);
        }
        void setTime(int h, int m, int s) {
            hours = h;
            minutes = m;
            seconds = s;
        }
        void normalize() {
            if (seconds >= 60) {
                minutes += seconds / 60;
                seconds %= 60;
            }
            if (minutes >= 60) {
                hours += minutes / 60;
                minutes %= 60;
            }
        }
        void display(){
            cout << hours << ":" << minutes << ":" << seconds << endl;
        }
        static Time add(Time t1, Time t2){
            Time result;
            result.seconds = t1.seconds+t2.seconds;
            result.hours = t1.hours+t2.hours;
            result.minutes = t1.minutes+t2.minutes;
            result.normalize();
            return result;
        }
};

int main(){
    Time time1(2, 30, 45);
    Time time2(1, 45, 30);
    Time resultTime = Time::add(time1, time2);
    cout << "Time 1: ";
    time1.display();
    cout << "Time 2: ";
    time2.display();
    cout << "Result Time: ";
    resultTime.display();
    return 0;
}