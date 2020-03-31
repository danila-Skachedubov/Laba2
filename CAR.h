#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include <iostream>
#include <cstring>
using namespace std;
class car
{
public:
        car();
        car(string model, int speed, int color, int price);
        ~car(void);

        void set_model(string car_model);
        std::string get_model();
        bool set_speed(const int car_speed);
        int get_speed();
        bool set_color(const int car_color);
        int get_color();
        bool set_price(const int car_price);
        int get_price();
        car (const car & obj);
    friend std:: ostream& operator<<(std::ostream &out, const car &CAR);
    friend std:: istream& operator>>(std::istream &in,  car &CAR);
    friend bool operator==(const car& rav1, const car& rav2);
    friend bool operator!= (const car &rav1, const car &rav2);
    friend bool operator>= (const car &br1, const car &br2);
    friend bool operator<= (const car &mr1, const car &mr2);
    bool operator< (const car &d1);
    bool operator> (const car &o1);
    car& operator++();
    car operator++ (int);
    car& operator--();
    car operator-- (int);


private:

        int color;
        int speed;
        std::string model;
        int price;



};

#endif // CAR_H_INCLUDED
