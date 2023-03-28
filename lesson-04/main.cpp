#include <iostream>

using namespace std;

class Time
{
private:
    int t;
public:
    int showTime(){return this->t;};



    Time() {this->t=0;};
    Time(int timeInHours){this->t=timeInHours;};
    Time(int hours, int minutes, int seconds)
    {
        hours= hours * 60 * 60;
        minutes= minutes * 60;
        this->t=hours + minutes + seconds;
    };
    Time(std::string t) : Time(std::stoi(t)) {};




};

int main()
{
    Time defaultTime;
    Time timeInHours(5);
    Time compareHoursMinutesSecondsToSeconds(5,45,40);
    Time stingTime("17");
    std::cout << defaultTime.showTime() << std::endl;
    std::cout << timeInHours.showTime() << std::endl;
    std::cout << compareHoursMinutesSecondsToSeconds.showTime() << std::endl;
    std::cout << stingTime.showTime() << std::endl;


    return 0;
}
