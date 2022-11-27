
#include <iostream>
using namespace std;
 
class Time
{
private:
    int hrs;
    int mins;
    int sec;
 
public:
    void getTime(void);
    void putTime(void);
    void addTime(Time T1,Time T2);
};
 
void Time::getTime(void)
{
    cout << "Enter the time:" << endl;
    cout << "Enter Hours? ";    cin>>hrs;
    cout << "Enter Minutes? ";  cin>>mins;
    cout << "Enter Seconds? ";  cin>>sec;
}
 
void Time::putTime(void)
{
    cout << endl;
    cout << "The Time after addition: ";
    cout << hrs << ":" << mins << ":" << sec << endl;
}
 
void Time::addTime(Time T1,Time T2)
{
     
    this->sec=T1.sec+T2.sec;
    this->mins=T1.mins+T2.mins + this->sec/60;;
    this->hrs= T1.hrs+T2.hrs + (this->mins/60);
    this->mins %=60;
    this->sec %=60;
}
 
 
int main()
{
    Time T1,T2,T3;
    T1.getTime();
    T2.getTime();

    T3.addTime(T1,T2);
    T3.putTime();
     
    return 0;
}
