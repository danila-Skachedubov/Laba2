#include <string>
#include <iostream>
#include "CAR.h"
#include <cstring>
using namespace std;
    car::car()
{
   this->model = "bmw";
   this->speed = 290;
   this->color = 15;
   this->price = 5000000;
}
   car::car(string model, int speed, int color, int price):car()
    {

    set_model(model);
   set_speed(speed);
   set_color(color);
   set_price(price);
    }

void car::set_model(std::string car_model)
    {
        model=car_model;

    }
     std::string car::get_model()
    {
        return model;
    }
     bool car::set_speed(const int car_speed)
    {
        if(car_speed>0)
        {
            speed=car_speed;
            return true;
        }
        speed=20;
      return false;

    }
    int car::get_speed()
    {
        return speed;
    }
     bool car::set_color(const int car_color)
    {
        if(car_color >= 0 && car_color <=255 )
        {
            color=car_color;
            return true;
        }
        color=0;
        return false;
        std::cout<<"//неверное значение// "<<this<<endl;
    }
    int car::get_color()
    {
        return color;
    }
    bool car::set_price(const int car_price)
    {
        if(car_price>0)
        {
            price=car_price;
            return true;
        }
        price=100000;
      return false;
        std::cout<<"//неверное значение// "<<endl;
    }
    int car::get_price()
    {
        return price;
    }
     car::car (const car& others)
    {
        std::cout<<"//ВЫзов конструктора копирования//"<<this <<endl;
        this-> model=others.model;
        this ->speed=others.speed;
        this ->color=others.color;
        this->price=others.price;

    }

    std:: ostream& operator<<(std::ostream &out, const car &CAR)//Реализация перегрузки оператора вывода
    {
        out << "( Название машины:" << CAR.model << ", Скорость: "<<CAR.speed<<", Цвет:"<<CAR.color<<", Цена:"<<CAR.price<<")";
        return out;
    }
    std:: istream& operator>>(std::istream &in,  car &CAR)//Реализация перегрузки оператора ввода
    {
        in >> CAR.model;
        in >> CAR.speed;
        in >> CAR.color;
        in >> CAR.price;
        return in;
    }
    bool operator==(const car& rav1, const car& rav2)//реализация перегрузки оператора равенства
    {
        return((rav1.model==rav2.model)&&(rav1.speed==rav2.speed)&&(rav1.color==rav2.color));
    }
    bool operator!=(const car &rav1, const car &rav2)//реализация перегрузки оператора неравенства для скорости машины
    {
return !(rav1.color== rav2.color);
    }
    bool operator>= (const car &br1, const car &br2)
    {
return br1.speed>=br2.speed;
   }
    bool operator<= (const car &mr1, const car &mr2)
    {
return mr1.speed<=mr2.speed;
    }
    bool car::operator< (const car &d1)
{
return price < d1.price;
}
    bool car::operator> (const car &o1)
{
return price > o1.price;
}
car& car :: operator ++()
    {
        if(model=="kia")
        {
            this-> model="KiaRio";
            this->price=600000;
            this->color=0;
            this->speed=100;
             cout<<model<<","<<speed<<","<<color<<","<<price<<endl;
        }
        if(this->model=="KiaRio")
        {
            this->model="KiaCeed";
            this->speed+=20;
            this->price+=200000;
            cout<<model<<","<<speed<<","<<color<<","<<price<<endl;
        }

        else if(this->model=="KiaCeed")
        {
            this->model="KiaCerato";
            this->speed+=20;
            this->price+=200000;
            cout<<model<<","<<speed<<","<<color<<","<<price<<endl;
        }

        else  if(this->model=="KiaCerato")
        {
            this->model="KiaStinger";
            this->speed+=20;
            this->price+=200000;
            cout<<model<<","<<speed<<","<<color<<","<<price<<endl;
        }

        else if (model=="mercedes")
        {
            this-> model="MercedesA";
            this->price=1800000;
            this->color=0;
            this->speed=150;
             cout<<model<<","<<speed<<","<<color<<","<<price<<endl;
        }
        else if(this->model=="MercedesA")
        {
            this->model="MercedesC";
            this->speed+=40;
            this->price+=1000000;
            cout<<model<<","<<speed<<","<<color<<","<<price<<endl;
        }

        else if(this->model=="MercedesE")
        {
            this->model="MercedesS";
            this->speed+=40;
            this->price+=1000000;
             cout<<model<<","<<speed<<","<<color<<","<<price<<endl;
        }
        else if(this->model=="MercedesC")
        {
            this->model="MercedesE";
            this->speed+=40;
            this->price+=1000000;
            cout<<model<<","<<speed<<","<<color<<","<<price<<endl;
        }
        else if(model=="lamborghini")
        {
            this-> model="La";
            this->price=10000000;
            this->color=0;
            this->speed=250;
             cout<<model<<","<<speed<<","<<color<<","<<endl;
        }
            if(this->model=="La")
        {
            this->model="Lam";
            this->speed+=60;
            this->price+=10000000;
            cout<<model<<","<<speed<<","<<color<<","<<price<<endl;
        }

            if(this->model=="Lamb")
        {
            this->model="Lambo";
            this->speed+=60;
            this->price+=10000000;
            cout<<model<<","<<speed<<","<<color<<","<<price<<endl;
        }
        if(this->model=="Lam")
        {
            this->model="Lamb";
            this->speed+=60;
            this->price+=10000000;
            cout<<model<<","<<speed<<","<<color<<","<<price<<endl;
        }

        return *this;
    }
car& car :: operator --()
    {
        {

        if(this->model=="KiaCeed")
        {
            this->model="KiaRio";
            this->speed-=20;
            this->price-=200000;
            cout<<model<<","<<speed<<","<<color<<","<<price<<endl;
        }
        else if(this->model=="KiaCerato")
        {
            this->model="KiaCeed";
            this->speed-=20;
            this->price-=200000;
            cout<<model<<","<<speed<<","<<color<<","<<price<<endl;
        }
        else if(this->model=="KiaStinger")
        {
            this->model="KiaCerato";
            this->speed-=20;
            this->price-=200000;
            cout<<model<<","<<speed<<","<<color<<","<<price<<endl;
        }

        }

            if(this->model=="MercedesS")
        {
            this->model="MercedesE";
            this->speed-=40;
            this->price-=1000000;
            cout<<model<<","<<speed<<","<<color<<","<<price<<endl;
        }
            if(this->model=="MercedesE")
        {
            this->model="MercedesC";
            this->speed-=40;
            this->price-=1000000;
            cout<<model<<","<<speed<<","<<color<<","<<price<<endl;
        }
            if(this->model=="MercedesC")
        {
            this->model="MercedesA";
            this->speed-=40;
            this->price-=1000000;
            cout<<model<<","<<speed<<","<<color<<","<<price<<endl;
        }
            if(this->model=="Lambo")
        {
            this->model="Lamb";
            this->speed-=60;
            this->price-=10000000;
            cout<<model<<","<<speed<<","<<color<<","<<price<<","<<endl;
        }
            if(this->model=="Lamb")
        {
            this->model="Lam";
            this->speed-=60;
            this->price-=10000000;
            cout<<model<<","<<speed<<","<<color<<","<<price<<","<<endl;
        }
            if(this->model=="Lam")
        {
            this->model="La";
            this->speed-=60;
            this->price-=10000000;
            cout<<model<<","<<speed<<","<<color<<","<<price<<endl;
        }

        return *this;
    }
    car car:: operator++(int)
    {
        return++(*this);
    }
     car car:: operator--(int)
    {
        return--(*this);
    }
    car::~car(void){}
